# RbxgsApp full owned-symbol link probe

The normal private RbxgsApp report linked, passed its tree smoke test, and
recorded 4,375 local owned addresses. Its existing fixture forced verified
swaps, not every externally defined symbol associated with those addresses.

An independent fixture forced 12,790 external names from the current linked
objects and ownership inventory. It linked the existing RbxgsApp, G3D, G3D-GL,
PNG, Boost, RakNet and zlib libraries, plus the G3D vendor-demo SDL 1.2.9
support runtime. The fixture compiled but did not link: 48 unresolved symbols
and one duplicate definition were reported. `result.json` lists the unresolved
names. Twenty-four are `LevelBuilder::buildFace` template instances; the rest
include other renderer, mesh and view dependencies. Counts are not independent
functions: multiple names may belong to one missing implementation family.

This probe does not invalidate the original narrower successful smoke test, but
does show that it cannot establish full owned-symbol link closure. No symbols
were credited or submitted from this failure. The linked fixture did not run.
Recover missing implementations from authentic source and binary evidence;
do not replace them with no-op bodies or fabricate layouts. Reproduce with the
current object snapshot and `force-check.py` in the private checkout, with the
checkout root on `PYTHONPATH`.
