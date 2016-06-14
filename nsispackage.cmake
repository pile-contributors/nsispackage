
# enable/disable cmake debug messages related to this pile
set (NSISPACKAGE_DEBUG_MSG ON)

# make sure support code is present; no harm
# in including it twice; the user, however, should have used
# pileInclude() from pile_support.cmake module.
include(pile_support)

# initialize this module
macro    (nsispackageInit
          ref_cnt_use_mode)

    # default name
    if (NOT NSISPACKAGE_INIT_NAME)
        set(NSISPACKAGE_INIT_NAME "NsisPackage")
    endif ()

    # compose the list of headers and sources
    set(NSISPACKAGE_HEADERS
        "nsispackage.h")
    set(NSISPACKAGE_SOURCES
        "nsispackage.cc")

    pileSetSources(
        "${NSISPACKAGE_INIT_NAME}"
        "${NSISPACKAGE_HEADERS}"
        "${NSISPACKAGE_SOURCES}")

    pileSetCommon(
        "${NSISPACKAGE_INIT_NAME}"
        "0;0;1;d"
        "ON"
        "${ref_cnt_use_mode}"
        ""
        "category1"
        "tag1;tag2")

endmacro ()
