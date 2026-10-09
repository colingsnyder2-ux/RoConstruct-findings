// from server: 100% by colin
// roc 2007-08 0058ba70  unit: RBX::SoundService  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ba70
//
// 0058ba70  56                   push esi
// 0058ba71  8bf1                 mov esi, ecx
// 0058ba73  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0058ba79  85c0                 test eax, eax
// 0058ba7b  741e                 je 0x58ba9b
// 0058ba7d  6a00                 push 0
// 0058ba7f  50                   push eax
// 0058ba80  e889410a00           call 0x62fc0e
// 0058ba85  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0058ba8b  50                   push eax
// 0058ba8c  e8b9410a00           call 0x62fc4a
// 0058ba91  c786f400000000000000 mov dword ptr [esi + 0xf4], 0
// 0058ba9b  8bce                 mov ecx, esi
// 0058ba9d  e83efdffff           call 0x58b7e0
// 0058baa2  83c8ff               or eax, 0xffffffff
// 0058baa5  398620010000         cmp dword ptr [esi + 0x120], eax
// 0058baab  7412                 je 0x58babf
// 0058baad  68e8338c00           push 0x8c33e8
// 0058bab2  8bce                 mov ecx, esi
// 0058bab4  898620010000         mov dword ptr [esi + 0x120], eax
// 0058baba  e8518cebff           call 0x444710
// 0058babf  5e                   pop esi
// 0058bac0  c3                   ret 

struct SoundService {
    char pad[0xf4];
    void* field_f4;
    char pad2[0x120 - 0xf8];
    int field_120;
    void sub_58b7e0();
    void sub_444710(const void*);
    void cleanup();
};

extern "C" void __stdcall func_62fc0e(void*, int);
extern "C" void __stdcall func_62fc4a(void*);

void SoundService::cleanup()
{
    if (field_f4) {
        func_62fc0e(field_f4, 0);
        func_62fc4a(field_f4);
        field_f4 = 0;
    }
    sub_58b7e0();
    int v = -1;
    if (field_120 != v) {
        field_120 = v;
        sub_444710((const void*)0x8c33e8);
    }
}
