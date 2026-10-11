// from server: 75% by colin
// roc 2008-06 005d5e10  unit: RBX::Teams  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5e10
//
// 005d5e10  51                   push ecx
// 005d5e11  53                   push ebx
// 005d5e12  55                   push ebp
// 005d5e13  56                   push esi
// 005d5e14  57                   push edi
// 005d5e15  8bd9                 mov ebx, ecx
// 005d5e17  33ff                 xor edi, edi
// 005d5e19  e80250ebff           call 0x48ae20
// 005d5e1e  85c0                 test eax, eax
// 005d5e20  7666                 jbe 0x5d5e88
// 005d5e22  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005d5e28  eb06                 jmp 0x5d5e30
// 005d5e2a  8d9b00000000         lea ebx, [ebx]
// 005d5e30  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005d5e36  8b4610               mov eax, dword ptr [esi + 0x10]
// 005d5e39  2b460c               sub eax, dword ptr [esi + 0xc]
// 005d5e3c  c1f803               sar eax, 3
// 005d5e3f  3bf8                 cmp edi, eax
// 005d5e41  7202                 jb 0x5d5e45
// 005d5e43  ffd5                 call ebp
// 005d5e45  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005d5e48  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 005d5e4b  6a00                 push 0
// 005d5e4d  68ec579400           push 0x9457ec
// 005d5e52  687c909200           push 0x92907c
// 005d5e57  6a00                 push 0
// 005d5e59  50                   push eax
// 005d5e5a  e867b90c00           call 0x6a17c6
// 005d5e5f  8bf0                 mov esi, eax
// 005d5e61  83c414               add esp, 0x14
// 005d5e64  85f6                 test esi, esi
// 005d5e66  7414                 je 0x5d5e7c
// 005d5e68  8d542410             lea edx, [esp + 0x10]
// 005d5e6c  52                   push edx
// 005d5e6d  8bce                 mov ecx, esi
// 005d5e6f  e8ccfff8ff           call 0x565e40
// 005d5e74  8b00                 mov eax, dword ptr [eax]
// 005d5e76  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005d5e7a  7416                 je 0x5d5e92
// 005d5e7c  8bcb                 mov ecx, ebx
// 005d5e7e  47                   inc edi
// 005d5e7f  e89c4febff           call 0x48ae20
// 005d5e84  3bf8                 cmp edi, eax
// 005d5e86  72a8                 jb 0x5d5e30
// 005d5e88  5f                   pop edi
// 005d5e89  5e                   pop esi
// 005d5e8a  5d                   pop ebp
// 005d5e8b  33c0                 xor eax, eax
// 005d5e8d  5b                   pop ebx
// 005d5e8e  59                   pop ecx
// 005d5e8f  c20400               ret 4
// 005d5e92  5f                   pop edi
// 005d5e93  8bc6                 mov eax, esi
// 005d5e95  5e                   pop esi
// 005d5e96  5d                   pop ebp
// 005d5e97  5b                   pop ebx
// 005d5e98  59                   pop ecx
// 005d5e99  c20400               ret 4

struct Team;

struct Teams {
    char pad[0x108];
    void* list;
    int find(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" unsigned int __fastcall sub_48AE20(Teams*);
extern "C" void __fastcall sub_565E40(Team*, int*);
extern "C" Team* __cdecl sub_6A17C6(int, int, int, int, int);

int Teams::find(int id)
{
    unsigned int i = 0;
    if (sub_48AE20(this) > 0)
    {
        void (__stdcall *handler)() = *(void (__stdcall**)())0x802890;
        do
        {
            void* vec = *(void**)((char*)this + 0x108);
            int count = (*(int*)((char*)vec + 0x10) - *(int*)((char*)vec + 0xc)) >> 3;
            if (i >= (unsigned int)count)
                handler();
            int val = *(int*)(*(int*)((char*)vec + 0xc) + i * 8);
            Team* t = sub_6A17C6(val, 0x92907c, 0x9457ec, 0, 0);
            if (t != 0)
            {
                int out;
                sub_565E40(t, &out);
                if (out == id)
                    return (int)t;
            }
            i++;
        } while (i < sub_48AE20(this));
    }
    return 0;
}
