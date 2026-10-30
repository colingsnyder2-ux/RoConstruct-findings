# RbxgsApp full owned-symbol link probe

The private RbxgsApp's normal fixture passes but forces only verified swaps,
not every externally defined symbol associated with locally owned addresses.

The original 48-symbol result used an unresolved symlink path for the overlay
root, so the fixture did not consistently use the patched headers. Preserve it
as `result-uncorrected.json`; do not use it as an ABI proof. The corrected
`force-check.py` resolves the overlay root before compiling the fixture.

With corrected headers and a baseline archive excluding the later
`AggregateChunk::cachesShadows` override, the forced fixture has 48 unresolved
symbols and one duplicate. The real override reduces that to 47; the later
`PartChunk::castsShadows` and `cullable` definitions reduce it to 45. The
latest fixture forces 12,793 external names and has the same duplicate.
Twenty-four remaining names are `LevelBuilder::buildFace` template instances.
`result.json`, `result-after-aggregate.json` and `baseline-corrected.json`
list the failures. These are symbols, not necessarily distinct implementations.

The full forced fixture does not link or run. Independent narrow fixtures force
the three methods, link and pass; target bytes and object provenance are in
the aggregate-shadow and partchunk-visibility verification bundles. The server
has not accepted these local changes. Do not replace remaining dependencies
with no-op bodies or invent layouts. Reproduce against a consistent private
object snapshot with the checkout root on `PYTHONPATH`.
