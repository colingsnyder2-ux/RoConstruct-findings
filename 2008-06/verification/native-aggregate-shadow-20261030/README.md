# AggregateChunk shadow-cache override

The target's RTTI identifies `RBX::RenderBase::AggregateChunk`; its vtable at
`0082d258` points from slot 1 to `005526d0`, which returns true. The current SDK
class is named `RBX::Render::AggregateChunk`; its compiled vtable uses slot 1 for
`cachesShadows`. The namespace difference is explicit and requires independent
ABI review. The method reads no fields. `vtable-proof.json` records both slots.

Defined the existing SDK method in `NativeAggregateShadow.cpp` with real
headers and a scoped optimize-off pragma. The 13 emitted bytes match the target.
The existing renderlib layer automatically compiles this overlay source; no
custom module layer is required. The linked module gained `005526d0` locally
without losing prior addresses. A narrow fixture forces that exact object into
the executable, and `linked-proof.json` checks object and executable bytes.
The fixture linked and passed 10/10 repeated runs; it exercises the normal
application tree, not this virtual method on a constructed AggregateChunk.

M2, M4a and M5 passed. M4b still has 10 unresolved symbols. The wider owned
force-link remains incomplete: its unresolved count fell from 48 to 47 after
this override, with one duplicate remaining. See the separate RbxgsApp force
probe for corrected overlay-path evidence and the complete symbol list.

The public local inventory already associates `005526d0` with Ogre, so this
is a new RbxgsApp owner, not a new distinct global local match; the deduplicated
owned-progress webhook sent nothing. A single-file proposal was submitted as
colin under the actual writer model. `server-receipt.json` says
`needs-owner-review`, `verified: false`, zero credits. The proposal contains
only this source unit; the local tests used other private overlay changes, so
the server must independently rebuild against its own baseline. No server
integration is claimed.
