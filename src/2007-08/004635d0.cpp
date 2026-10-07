// roc 2007-08 004635d0  unit: DxUserInput  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004635d0
//
// 004635d0  c701545b7900         mov dword ptr [ecx], 0x795b54
// 004635d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004635d0 { virtual ~S_func_004635d0(); };
S_func_004635d0::~S_func_004635d0()
{
}
