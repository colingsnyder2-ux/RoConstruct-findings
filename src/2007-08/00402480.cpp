// roc 2007-08 00402480  unit: VCWorkspace::?$CComObject  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00402480
//
// 00402480  c701544e7800         mov dword ptr [ecx], 0x784e54
// 00402486  ff25f4e67700         jmp dword ptr [0x77e6f4]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00402480 { virtual ~B_func_00402480(); };
struct S_func_00402480 : B_func_00402480 { ~S_func_00402480(); };
S_func_00402480::~S_func_00402480()
{
}
