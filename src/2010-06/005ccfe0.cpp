// from server: 100% by auto
// roc 2010-06 005ccfe0  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ccfe0
//
// 005ccfe0  8b442404             mov eax, dword ptr [esp + 4]
// 005ccfe4  56                   push esi
// 005ccfe5  8bf1                 mov esi, ecx
// 005ccfe7  8b08                 mov ecx, dword ptr [eax]
// 005ccfe9  83c004               add eax, 4
// 005ccfec  890e                 mov dword ptr [esi], ecx
// 005ccfee  50                   push eax
// 005ccfef  8d4e04               lea ecx, [esi + 4]
// 005ccff2  e89950e3ff           call 0x402090
// 005ccff7  8bc6                 mov eax, esi
// 005ccff9  5e                   pop esi
// 005ccffa  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\tesselate.cpp (function ??4Primitive@TessData@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/tesselate.cpp
