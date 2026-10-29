# BoostExtra Gregorian native exception cohort

Four vendor-header exception roots0055bbc0,0055bc30,0055bca0,0055c020 are exact in code and referenced data, selected from the verified archive. Minimal unmodified Boost1.35 Gregorian headers plus correct _DLL/_CPPUNWIND preprocessing avoid unrelated whole-thread regex dependencies and missing user-defined throw hook. Real DLL C++ runtime import library supplied.

Separate BoostExtra now6 forced roots:4 vendor-header exception functions,1 generated app-bind analog and1 postdate Boost1.36 IO failure codegen analog. All6 actual library owners checked. Version/template similarity is not evidence of original client Boost version. Raw inventory10 is diagnostic; no new server credits.

14 valid/invalid/leap/boundary date cases pass. All4 native roots are in the tested C++ factory dependency closure. C-linkage helper under /EHsc made callers assume nothrow and discard catch registration; full unpruned and direct compile reproduced abort, proving pruning was not the cause. Correct C++ linkage fixes typed catch. Boost1.35 accepts inclusive year10000, so invalid upper boundary is10001.

Cold empty-cache build and55 focused tests pass. Placement409. Six app/regex/template roots remain excluded; no fake callbacks or throw stubs.
