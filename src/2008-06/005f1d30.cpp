// from server: 100% by tester
// roc 2008-06 005f1d30  unit: RBX::FaceInstance  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1d30
//
// 005f1d30  53                   push ebx
// 005f1d31  8b1d88228000         mov ebx, dword ptr [0x802288]
// 005f1d37  56                   push esi
// 005f1d38  57                   push edi
// 005f1d39  8bf1                 mov esi, ecx
// 005f1d3b  8b4608               mov eax, dword ptr [esi + 8]
// 005f1d3e  6aff                 push -1
// 005f1d40  50                   push eax
// 005f1d41  33ff                 xor edi, edi
// 005f1d43  ffd3                 call ebx
// 005f1d45  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f1d48  85c0                 test eax, eax
// 005f1d4a  7423                 je 0x5f1d6f
// 005f1d4c  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005f1d4f  85ff                 test edi, edi
// 005f1d51  750e                 jne 0x5f1d61
// 005f1d53  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f1d56  51                   push ecx
// 005f1d57  ff1580228000         call dword ptr [0x802280]
// 005f1d5d  5f                   pop edi
// 005f1d5e  5e                   pop esi
// 005f1d5f  5b                   pop ebx
// 005f1d60  c3                   ret 
// 005f1d61  03c7                 add eax, edi
// 005f1d63  894614               mov dword ptr [esi + 0x14], eax
// 005f1d66  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005f1d6d  eb39                 jmp 0x5f1da8
// 005f1d6f  8b16                 mov edx, dword ptr [esi]
// 005f1d71  6aff                 push -1
// 005f1d73  52                   push edx
// 005f1d74  ffd3                 call ebx
// 005f1d76  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f1d79  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f1d7c  3bc1                 cmp eax, ecx
// 005f1d7e  761b                 jbe 0x5f1d9b
// 005f1d80  85c9                 test ecx, ecx
// 005f1d82  7408                 je 0x5f1d8c
// 005f1d84  2bc1                 sub eax, ecx
// 005f1d86  894610               mov dword ptr [esi + 0x10], eax
// 005f1d89  897e0c               mov dword ptr [esi + 0xc], edi
// 005f1d8c  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005f1d8f  897e14               mov dword ptr [esi + 0x14], edi
// 005f1d92  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005f1d99  eb0d                 jmp 0x5f1da8
// 005f1d9b  8b06                 mov eax, dword ptr [esi]
// 005f1d9d  6a00                 push 0
// 005f1d9f  6a01                 push 1
// 005f1da1  50                   push eax
// 005f1da2  ff15c0228000         call dword ptr [0x8022c0]
// 005f1da8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f1dab  51                   push ecx
// 005f1dac  ff1580228000         call dword ptr [0x802280]
// 005f1db2  85ff                 test edi, edi
// 005f1db4  740d                 je 0x5f1dc3
// 005f1db6  8b5604               mov edx, dword ptr [esi + 4]
// 005f1db9  6a00                 push 0
// 005f1dbb  57                   push edi
// 005f1dbc  52                   push edx
// 005f1dbd  ff15c0228000         call dword ptr [0x8022c0]
// 005f1dc3  5f                   pop edi
// 005f1dc4  5e                   pop esi
// 005f1dc5  5b                   pop ebx
// 005f1dc6  c3                   ret 

extern "C" {
    __declspec(dllimport) void* __stdcall WaitForSingleObject(void*, unsigned long);
    __declspec(dllimport) int __stdcall ReleaseMutex(void*);
    __declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
}

extern void* g_77d2b4;
extern void* g_77d1c8;
extern void* g_77d1d4;

struct boost_thread_resource_error {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void f();
};

void boost_thread_resource_error::f()
{
    void* ebx = g_77d2b4;
    void* edi = 0;

    WaitForSingleObject(field8, 0xFFFFFFFF);

    if (field14 != 0) {
        edi = field10;
        if (edi == 0) {
            ReleaseMutex(field8);
            return;
        }
        field14 = (char*)field14 + (int)edi;
        field10 = 0;
    } else {
        WaitForSingleObject(field0, 0xFFFFFFFF);
        void* eax = field10;
        void* ecx = fieldC;
        if (eax > ecx) {
            if (ecx != 0) {
                field10 = (char*)eax - (int)ecx;
                fieldC = edi;
            }
            edi = field10;
            field14 = edi;
            field10 = 0;
        } else {
            ReleaseSemaphore(field0, 1, 0);
        }
    }

    ReleaseMutex(field8);

    if (edi != 0) {
        ReleaseSemaphore(field4, (long)edi, 0);
    }
}
