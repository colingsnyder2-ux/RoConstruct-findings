// roc 2007-08 00506a70  unit: seg_00500000  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00506a70
//
// 00506a70  c701fc057a00         mov dword ptr [ecx], 0x7a05fc
// 00506a76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00506a70 { virtual ~S_func_00506a70(); };
S_func_00506a70::~S_func_00506a70()
{
}
