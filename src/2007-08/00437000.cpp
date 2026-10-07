// roc 2007-08 00437000  unit: COutputView  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00437000
//
// 00437000  c70194cd7800         mov dword ptr [ecx], 0x78cd94
// 00437006  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00437000 { virtual ~S_func_00437000(); };
S_func_00437000::~S_func_00437000()
{
}
