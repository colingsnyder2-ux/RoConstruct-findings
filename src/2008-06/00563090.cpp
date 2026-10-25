// from server: 100% by king_originala
// roc 2008-06 00563090  unit: RBX::ContentProvider  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563090
//
// 00563090  56                   push esi
// 00563091  8bf1                 mov esi, ecx
// 00563093  807e0400             cmp byte ptr [esi + 4], 0
// 00563097  740b                 je 0x5630a4
// 00563099  8b06                 mov eax, dword ptr [esi]
// 0056309b  50                   push eax
// 0056309c  ff15d4228000         call dword ptr [0x8022d4]
// 005630a2  eb0b                 jmp 0x5630af
// 005630a4  8b0e                 mov ecx, dword ptr [esi]
// 005630a6  6aff                 push -1
// 005630a8  51                   push ecx
// 005630a9  ff1588228000         call dword ptr [0x802288]
// 005630af  ff4608               inc dword ptr [esi + 8]
// 005630b2  837e0801             cmp dword ptr [esi + 8], 1
// 005630b6  761a                 jbe 0x5630d2
// 005630b8  807e0400             cmp byte ptr [esi + 4], 0
// 005630bc  740b                 je 0x5630c9
// 005630be  8b16                 mov edx, dword ptr [esi]
// 005630c0  52                   push edx
// 005630c1  ff15f4218000         call dword ptr [0x8021f4]
// 005630c7  5e                   pop esi
// 005630c8  c3                   ret 
// 005630c9  8b06                 mov eax, dword ptr [esi]
// 005630cb  50                   push eax
// 005630cc  ff1580228000         call dword ptr [0x802280]
// 005630d2  5e                   pop esi
// 005630d3  c3                   ret 

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void *);
    extern void (__stdcall *LeaveCriticalSection)(void *);
    extern unsigned long (__stdcall *WaitForSingleObject)(void *, unsigned long);
    extern int (__stdcall *ReleaseMutex)(void *);
}

struct S {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
};

void S::lock()
{
    if (criticalSection)
        EnterCriticalSection(handle);
    else
        WaitForSingleObject(handle, 0xFFFFFFFFUL);

    ++count;
    if (count > 1) {
        if (criticalSection)
            LeaveCriticalSection(handle);
        else
            ReleaseMutex(handle);
    }
}
