# G3D GL native integration, 2026-10-29

Native G3D 6.09 patched vendor translation units use measured per-file /fp:fast cohorts. No vendor source, layout, or generated replacement body was changed. Twelve initial winning GL files plus twelve shared-provider GL files and ToneMap use fast floating point. Remaining files retain their existing profile. GApp replay uses the existing SDL-main overlay.

Inventory rises 451 to 486, but only three new addresses have actual selected library owners and exact code plus referenced data: 00472bb0 createTexture (Texture.obj), 00476700 CoordinateFrame composition (RenderDevice.obj), and 00478330 CoordinateFrame inverse (shadowVolume.obj). Other inventory candidates are unlinked, harness-owned, ambiguous, or fail referenced-data checks; they receive no native credit here. This is a local integration proof, not server credit or a full renderer claim.

All 48 prior forced roots remain strict code/data exact with actual library map owners. Thirteen additional shared-provider translation units preserve every prior strict pair, including twins. Same-filename layer dedup selects the measured cohort; shared-symbol safety remains enabled.

Real hidden WGL context uploads and reads back patterned RGB8 texture bytes without differences on NVIDIA GeForce RTX 3070 Ti. Lighting and camera checks also pass. The test creates its own WGL context and does not initialize RenderDevice or change desktop gamma.

Reports contain diagnostic private build paths. Reproduce with the packaged config and test using roc rebuild 2008-06 module g3d-gl. The audit scripts run from the repository root after restoring their campaign evidence paths.
