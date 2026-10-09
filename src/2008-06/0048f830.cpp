// roc 2008-06 0048f830  unit: RBX::VClothing::?$FactoryProduct::Creator  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f830
//
// 0048f830  c701d4188200         mov dword ptr [ecx], 0x8218d4
// 0048f836  c74110c8188200       mov dword ptr [ecx + 0x10], 0x8218c8
// 0048f83d  c74114c0188200       mov dword ptr [ecx + 0x14], 0x8218c0
// 0048f844  c74120b8188200       mov dword ptr [ecx + 0x20], 0x8218b8
// 0048f84b  c74124a8188200       mov dword ptr [ecx + 0x24], 0x8218a8
// 0048f852  c7414498188200       mov dword ptr [ecx + 0x44], 0x821898
// 0048f859  c7416488188200       mov dword ptr [ecx + 0x64], 0x821888
// 0048f860  c7818400000078188200 mov dword ptr [ecx + 0x84], 0x821878
// 0048f86a  c781a400000068188200 mov dword ptr [ecx + 0xa4], 0x821868
// 0048f874  c781c400000058188200 mov dword ptr [ecx + 0xc4], 0x821858
// 0048f87e  c7813001000050188200 mov dword ptr [ecx + 0x130], 0x821850
// 0048f888  e9b3ac0c00           jmp 0x55a540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
