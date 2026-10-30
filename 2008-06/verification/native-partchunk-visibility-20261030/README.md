# PartChunk shadow and culling overrides

The existing SDK declares `RBX::View::PartChunk::castsShadows` and `cullable`.
The real OpenRBX implementations return true. In the 2008 target, the related
class is named `RBX::ViewNew::PartChunk`; four target vtables use the same
`00565950` return-true body in slots 3 and 4. The SDK Part vtable uses the
corresponding methods in those slots. The namespace difference is explicit and
requires independent ABI review; the bodies read no fields.

The two definitions compile against the real SDK header in the existing view
layer. Both object bodies match the target's `b0 01 c3`; a narrow fixture forces
both symbols into the linked executable at the same folded address. The fixture
passed 10/10 runs of the normal application-tree smoke test; it did not construct
a PartChunk or invoke its virtual methods. No previously owned local address was
lost. The corrected full owned-symbol link fell from 47 unresolved names to 45,
with one duplicate remaining. The full fixture still does not link or run.

`00565950` was already globally server-integrated, so these are two additional
local owners and dependency repairs, not new distinct matches or credit. A
single-source proposal was submitted as colin; the receipt says
`needs-owner-review`, `verified: false`, zero credits. The full-force result
also includes other private changes, including the earlier AggregateChunk
override, so the server must independently rebuild this packet on its baseline.
M2, M4a and M5 passed; M4b remains unresolved.
