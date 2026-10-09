// from server: 76% by colin
// roc 2007-08 00564880  unit: CXTPDockingPaneAutoHidePanel  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564880
//
// 00564880  56                   push esi
// 00564881  8b742408             mov esi, dword ptr [esp + 8]
// 00564885  8b4604               mov eax, dword ptr [esi + 4]
// 00564888  57                   push edi
// 00564889  6a00                 push 0
// 0056488b  8bf9                 mov edi, ecx
// 0056488d  8b0e                 mov ecx, dword ptr [esi]
// 0056488f  50                   push eax
// 00564890  e87b280200           call 0x587110
// 00564895  85c0                 test eax, eax
// 00564897  7425                 je 0x5648be
// 00564899  8b7604               mov esi, dword ptr [esi + 4]
// 0056489c  85f6                 test esi, esi
// 0056489e  7412                 je 0x5648b2
// 005648a0  8b17                 mov edx, dword ptr [edi]
// 005648a2  8d4efc               lea ecx, [esi - 4]
// 005648a5  51                   push ecx
// 005648a6  50                   push eax
// 005648a7  8b02                 mov eax, dword ptr [edx]
// 005648a9  8bcf                 mov ecx, edi
// 005648ab  ffd0                 call eax
// 005648ad  5f                   pop edi
// 005648ae  5e                   pop esi
// 005648af  c20400               ret 4
// 005648b2  8b17                 mov edx, dword ptr [edi]
// 005648b4  33c9                 xor ecx, ecx
// 005648b6  51                   push ecx
// 005648b7  50                   push eax
// 005648b8  8b02                 mov eax, dword ptr [edx]
// 005648ba  8bcf                 mov ecx, edi
// 005648bc  ffd0                 call eax
// 005648be  5f                   pop edi
// 005648bf  5e                   pop esi
// 005648c0  c20400               ret 4

struct CXTPDockingPaneAutoHidePanel
{
    void func_00564880(void*);
};

extern "C" int __stdcall sub_00587110(int, int, int);

void CXTPDockingPaneAutoHidePanel::func_00564880(void* arg)
{
    int* p = (int*)arg;
    int v = sub_00587110(p[0], p[1], 0);
    if (v != 0)
    {
        int* q = (int*)p[1];
        if (q != 0)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, void*) = (void (__stdcall*)(void*, void*))vt[0];
            fn((void*)v, (void*)((char*)q - 4));
        }
        else
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, void*) = (void (__stdcall*)(void*, void*))vt[0];
            fn((void*)v, 0);
        }
    }
}
