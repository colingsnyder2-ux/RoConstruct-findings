# Native G3D/Boost containers and TextDisplay - 2026-10-30

RbxgsApp4217 ->4229 owned addresses:12 gains,0 losses. Eight gains come from explicit instantiations in ordinary App/reflection/NativeContainerInstantiations.cpp, using actual G3D/Boost/RBX declarations. No private replacements, fields, offsets or fake classes. Existing seven module layers unchanged.

Successful TextDisplay cast exposed genuinely absent constructor definitions. Restored parameterized constructor, init, virtual getFontSize/getLabel/render2d against existing SDK declarations. Native code005744a0 calls GuiItem constructor, TextDisplay init005735e0, setName and label assignment. Init proves180x30 GUI size,font18,Color3::purple with alpha1,clear border,center alignment. Getter/render bodies match00574570/00574580/00573670. Four of these restored bodies, including parameterized constructor, match exact. No invented default constructor was added.

All seven layers compile with0 errors; ordinary module link/runtime0.419 forced external symbols include prior407 plus new roots. Retained64 Name cache checks,signals/Value copy/vector/map/find. New real SDK array growth/shrink/append/insert/remove/fastRemove/pop/popDiscard/swap/clear and Rect2D preservation pass. Actual Part,Player,Stats Item,TextDisplay casts pass for correct type,wrong Message andnull,with ownership counts verified. Player correctly rejects anonymous creation; real scoped CmdLine identity enables authorized constructor test. TextDisplay render body is forced and exact; actual font rendering was not exercised.

All12 gained addresses pass freshly rechecked source-object code/data and normalized instruction bytes in actual linked executable, with selected module-object ownership confirmed by linker map. No copied test-inline body substitutes for the gained module implementation.

Combined packet dd2e864edb9c73af2d78ba51a5e158f9883023b45290070c910cf48b3accb8f8 supersedes841d934d.152 existing exact-mined witnesses,155 delta overlay paths. Server baseline f1c4c2ec retained. State needs-owner-review,verifiedfalse,credits0. Independent ABI/M2/M4a/M5/reference/zero-loss gates remain required. Public bundle is review evidence; accepted default overlay is not overwritten.

10 globally new owned exacts sent as colin using purple Server Mining mining-digest embeds;2 module gains already globally owned. No accepted credits claimed.

Source main24db9e9859 also adds complete-object ownership cache keyed on object bytes,target mapped image,function table,relocations and stable loaded matcher code.138 tests pass. Unchanged ownership scan46.2s ->3.2s,all4225 previous symbols identical. Full rebuild reused253/269 objects; later source changes invalidated affected objects correctly.
