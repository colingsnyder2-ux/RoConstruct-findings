// from server: 100% by colin
// roc 2008-06 005f1df0  unit: RBX::FaceInstance  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1df0
//
// 005f1df0  53                   push ebx
// 005f1df1  8b1d88228000         mov ebx, dword ptr [0x802288]
// 005f1df7  55                   push ebp
// 005f1df8  56                   push esi
// 005f1df9  57                   push edi
// 005f1dfa  8bf1                 mov esi, ecx
// 005f1dfc  8b4604               mov eax, dword ptr [esi + 4]
// 005f1dff  6aff                 push -1
// 005f1e01  50                   push eax
// 005f1e02  ffd3                 call ebx
// 005f1e04  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f1e07  6aff                 push -1
// 005f1e09  51                   push ecx
// 005f1e0a  ffd3                 call ebx
// 005f1e0c  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005f1e0f  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005f1e12  85ff                 test edi, edi
// 005f1e14  7425                 je 0x5f1e3b
// 005f1e16  8d47ff               lea eax, [edi - 1]
// 005f1e19  894614               mov dword ptr [esi + 0x14], eax
// 005f1e1c  85c0                 test eax, eax
// 005f1e1e  7549                 jne 0x5f1e69
// 005f1e20  394610               cmp dword ptr [esi + 0x10], eax
// 005f1e23  7410                 je 0x5f1e35
// 005f1e25  8b16                 mov edx, dword ptr [esi]
// 005f1e27  50                   push eax
// 005f1e28  6a01                 push 1
// 005f1e2a  52                   push edx
// 005f1e2b  ff15c0228000         call dword ptr [0x8022c0]
// 005f1e31  33ff                 xor edi, edi
// 005f1e33  eb34                 jmp 0x5f1e69
// 005f1e35  85ed                 test ebp, ebp
// 005f1e37  7430                 je 0x5f1e69
// 005f1e39  eb27                 jmp 0x5f1e62
// 005f1e3b  8d4501               lea eax, [ebp + 1]
// 005f1e3e  89460c               mov dword ptr [esi + 0xc], eax
// 005f1e41  3dffffff7f           cmp eax, 0x7fffffff
// 005f1e46  7521                 jne 0x5f1e69
// 005f1e48  8b06                 mov eax, dword ptr [esi]
// 005f1e4a  6aff                 push -1
// 005f1e4c  50                   push eax
// 005f1e4d  ffd3                 call ebx
// 005f1e4f  8b16                 mov edx, dword ptr [esi]
// 005f1e51  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f1e54  294e10               sub dword ptr [esi + 0x10], ecx
// 005f1e57  6a00                 push 0
// 005f1e59  6a01                 push 1
// 005f1e5b  52                   push edx
// 005f1e5c  ff15c0228000         call dword ptr [0x8022c0]
// 005f1e62  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005f1e69  8b4608               mov eax, dword ptr [esi + 8]
// 005f1e6c  50                   push eax
// 005f1e6d  ff1580228000         call dword ptr [0x802280]
// 005f1e73  83ff01               cmp edi, 1
// 005f1e76  7522                 jne 0x5f1e9a
// 005f1e78  85ed                 test ebp, ebp
// 005f1e7a  7411                 je 0x5f1e8d
// 005f1e7c  8d642400             lea esp, [esp]
// 005f1e80  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1e83  6aff                 push -1
// 005f1e85  51                   push ecx
// 005f1e86  ffd3                 call ebx
// 005f1e88  83ed01               sub ebp, 1
// 005f1e8b  75f3                 jne 0x5f1e80
// 005f1e8d  8b16                 mov edx, dword ptr [esi]
// 005f1e8f  6a00                 push 0
// 005f1e91  6a01                 push 1
// 005f1e93  52                   push edx
// 005f1e94  ff15c0228000         call dword ptr [0x8022c0]
// 005f1e9a  5f                   pop edi
// 005f1e9b  5e                   pop esi
// 005f1e9c  5d                   pop ebp
// 005f1e9d  5b                   pop ebx
// 005f1e9e  c3                   ret 

extern "C" {
    __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void*, unsigned long);
    __declspec(dllimport) int __stdcall ReleaseMutex(void*);
    __declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
}

struct S {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;
    void method();
};

void S::method()
{
    unsigned long (__stdcall *wait)(void*, unsigned long) = WaitForSingleObject;
    int (__stdcall *relmutex)(void*) = ReleaseMutex;
    int (__stdcall *relsem)(void*, long, long*) = ReleaseSemaphore;

    wait(field4, 0xffffffffUL);
    wait(field8, 0xffffffffUL);

    int edi = field14;
    int ebp = fieldC;

    if (edi != 0) {
        int remaining = edi - 1;
        field14 = remaining;
        if (remaining == 0) {
            if (field10 != 0) {
                relsem(field0, 1, 0);
                edi = 0;
            } else if (ebp != 0) {
                fieldC = 0;
            }
        }
    } else {
        int count = ebp + 1;
        fieldC = count;
        if (count == 0x7fffffff) {
            wait(field0, 0xffffffffUL);
            field10 -= fieldC;
            relsem(field0, 1, 0);
            fieldC = 0;
        }
    }

    relmutex(field8);

    if (edi == 1) {
        while (ebp != 0) {
            wait(field4, 0xffffffffUL);
            --ebp;
        }
        relsem(field0, 1, 0);
    }
}
