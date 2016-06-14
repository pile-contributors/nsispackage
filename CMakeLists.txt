if (NOT NSISPACKAGE_BUILD_MODE)
    set (NSISPACKAGE_BUILD_MODE STATIC)
endif ()

include(pile_support)
pileInclude (NsisPackage)
nsispackageInit(${NSISPACKAGE_BUILD_MODE})
