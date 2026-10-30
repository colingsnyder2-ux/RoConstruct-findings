# RbxgsApp full owned-symbol link probe

The private RbxgsApp's normal fixture passes but forces only verified swaps,
not every externally defined symbol associated with locally owned addresses.

The original 48-symbol result used an unresolved symlink path for the overlay
root, so the fixture did not consistently use the patched headers. Preserve it
as `result-uncorrected.json`; do not use it as an ABI proof. The corrected
`force-check.py` resolves the overlay root before compiling the fixture.

With corrected headers and a baseline archive excluding the later
`AggregateChunk::cachesShadows` override, the forced fixture has 48 unresolved
symbols and one duplicate. After the real override is added in its own source
unit, the fixture forces 12,791 external names and has 47 unresolved symbols
and the same duplicate. The missing override is resolved. Twenty-four remaining
names are `LevelBuilder::buildFace` template instances. `result.json` and
`baseline-corrected.json` list the failures. These are symbols, not necessarily
distinct implementations or functions.

The full forced fixture does not link or run. An independent narrow fixture
forces the new override, links and passes; its target bytes and object provenance
are documented separately in the aggregate-shadow verification bundle. The
server has not accepted this local change. Do not replace remaining dependencies
with no-op bodies or invent layouts. Reproduce against a consistent private
object snapshot with the checkout root on `PYTHONPATH`.
