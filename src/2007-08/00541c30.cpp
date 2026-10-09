// from server: 54% by colin
// roc 2007-08 00541c30  unit: RBX::VInstance::?$NonFactoryProduct  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541c30
//
// 00541c30  83ec08               sub esp, 8
// 00541c33  55                   push ebp
// 00541c34  8be9                 mov ebp, ecx
// 00541c36  56                   push esi
// 00541c37  8bb5c0000000         mov esi, dword ptr [ebp + 0xc0]
// 00541c3d  85f6                 test esi, esi
// 00541c3f  744c                 je 0x541c8d
// 00541c41  53                   push ebx
// 00541c42  57                   push edi
// 00541c43  8b7e08               mov edi, dword ptr [esi + 8]
// 00541c46  397e04               cmp dword ptr [esi + 4], edi
// 00541c49  7606                 jbe 0x541c51
// 00541c4b  ff15d8e67700         call dword ptr [0x77e6d8]
// 00541c51  8d47f8               lea eax, [edi - 8]
// 00541c54  3b4608               cmp eax, dword ptr [esi + 8]
// 00541c57  8bde                 mov ebx, esi
// 00541c59  897c2414             mov dword ptr [esp + 0x14], edi
// 00541c5d  7705                 ja 0x541c64
// 00541c5f  3b4604               cmp eax, dword ptr [esi + 4]
// 00541c62  7306                 jae 0x541c6a
// 00541c64  ff15d8e67700         call dword ptr [0x77e6d8]
// 00541c6a  8d77f8               lea esi, [edi - 8]
// 00541c6d  3b7308               cmp esi, dword ptr [ebx + 8]
// 00541c70  7206                 jb 0x541c78
// 00541c72  ff15d8e67700         call dword ptr [0x77e6d8]
// 00541c78  8b0e                 mov ecx, dword ptr [esi]
// 00541c7a  6a00                 push 0
// 00541c7c  e8aff9ffff           call 0x541630
// 00541c81  8bb5c0000000         mov esi, dword ptr [ebp + 0xc0]
// 00541c87  85f6                 test esi, esi
// 00541c89  75b8                 jne 0x541c43
// 00541c8b  5f                   pop edi
// 00541c8c  5b                   pop ebx
// 00541c8d  5e                   pop esi
// 00541c8e  5d                   pop ebp
// 00541c8f  83c408               add esp, 8
// 00541c92  c3                   ret 

struct NonFactoryProduct {
    char pad[0xc0];
    void* ptr;
    void destroy();
};

extern "C" void __stdcall invalid_parameter_noinfo();

void NonFactoryProduct::destroy()
{
    void* p = ptr;
    while (p) {
        char* base = (char*)p;
        char* end = *(char**)(base + 8);
        if (*(unsigned*)(base + 4) > (unsigned)end)
            invalid_parameter_noinfo();
        char* elem = end - 8;
        if (elem > *(char**)(base + 8) || elem < *(char**)(base + 4))
            invalid_parameter_noinfo();
        char* e2 = end - 8;
        if (e2 >= *(char**)(base + 8))
            invalid_parameter_noinfo();
        void* obj = *(void**)e2;
        ((void (__thiscall*)(void*, int))0x541630)(obj, 0);
        p = ptr;
    }
}
