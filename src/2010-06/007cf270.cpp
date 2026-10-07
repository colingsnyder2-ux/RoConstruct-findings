// roc 2010-06 007cf270  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf270
//
// 007cf270  c701908ca500         mov dword ptr [ecx], 0xa58c90
// 007cf276  8b4904               mov ecx, dword ptr [ecx + 4]
// 007cf279  85c9                 test ecx, ecx
// 007cf27b  7407                 je 0x7cf284
// 007cf27d  51                   push ecx
// 007cf27e  e8c389fdff           call 0x7a7c46
// 007cf283  59                   pop ecx
// 007cf284  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007cf270(void*);
struct S_func_007cf270 {
    virtual ~S_func_007cf270();
    void* m_p;
};
S_func_007cf270::~S_func_007cf270()
{
    if (m_p)
        G1_func_007cf270(m_p);
}
