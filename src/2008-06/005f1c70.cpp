// roc 2008-06 005f1c70  unit: RBX::FaceInstance  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1c70
//
// 005f1c70  56                   push esi
// 005f1c71  8bf1                 mov esi, ecx
// 005f1c73  8b06                 mov eax, dword ptr [esi]
// 005f1c75  57                   push edi
// 005f1c76  8b3d34228000         mov edi, dword ptr [0x802234]
// 005f1c7c  50                   push eax
// 005f1c7d  ffd7                 call edi
// 005f1c7f  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1c82  51                   push ecx
// 005f1c83  ffd7                 call edi
// 005f1c85  8b5608               mov edx, dword ptr [esi + 8]
// 005f1c88  52                   push edx
// 005f1c89  ffd7                 call edi
// 005f1c8b  5f                   pop edi
// 005f1c8c  5e                   pop esi
// 005f1c8d  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00726890@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern "C" int (__stdcall *CloseHandle)(void*);

struct S_func_00726890 {
    void* field0;
    void* field4;
    void* field8;
    void f();
};

void S_func_00726890::f()
{
    int (__stdcall *p)(void*) = CloseHandle;
    p(field0);
    p(field4);
    p(field8);
}
}
