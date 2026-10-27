// from server: 85% by coldek
// roc 2008-06 0040fbf0  unit: VCBrowserViewExternal::?$CComAggObject  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fbf0
//
// 0040fbf0  55                   push ebp
// 0040fbf1  8bec                 mov ebp, esp
// 0040fbf3  6aff                 push -1
// 0040fbf5  6810d57b00           push 0x7bd510
// 0040fbfa  64a100000000         mov eax, dword ptr fs:[0]
// 0040fc00  50                   push eax
// 0040fc01  64892500000000       mov dword ptr fs:[0], esp
// 0040fc08  83ec10               sub esp, 0x10
// 0040fc0b  53                   push ebx
// 0040fc0c  56                   push esi
// 0040fc0d  57                   push edi
// 0040fc0e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040fc11  33f6                 xor esi, esi
// 0040fc13  bf0e000780           mov edi, 0x8007000e
// 0040fc18  6a20                 push 0x20
// 0040fc1a  897dec               mov dword ptr [ebp - 0x14], edi
// 0040fc1d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0040fc20  8975fc               mov dword ptr [ebp - 4], esi
// 0040fc23  e8f80c2900           call 0x6a0920
// 0040fc28  83c404               add esp, 4
// 0040fc2b  3bc6                 cmp eax, esi
// 0040fc2d  743f                 je 0x40fc6e
// 0040fc2f  897018               mov dword ptr [eax + 0x18], esi
// 0040fc32  897010               mov dword ptr [eax + 0x10], esi
// 0040fc35  89700c               mov dword ptr [eax + 0xc], esi
// 0040fc38  c7400888d38000       mov dword ptr [eax + 8], 0x80d388
// 0040fc3f  33c9                 xor ecx, ecx
// 0040fc41  6689481c             mov word ptr [eax + 0x1c], cx
// 0040fc45  c70078d78000         mov dword ptr [eax], 0x80d778
// 0040fc4b  c7400460d78000       mov dword ptr [eax + 4], 0x80d760
// 0040fc52  c740083cd78000       mov dword ptr [eax + 8], 0x80d73c
// 0040fc59  c7401414d78000       mov dword ptr [eax + 0x14], 0x80d714
// 0040fc60  3bc6                 cmp eax, esi
// 0040fc62  7422                 je 0x40fc86
// 0040fc64  ff4018               inc dword ptr [eax + 0x18]
// 0040fc67  33ff                 xor edi, edi
// 0040fc69  ff4818               dec dword ptr [eax + 0x18]
// 0040fc6c  eb18                 jmp 0x40fc86
// 0040fc6e  33c0                 xor eax, eax
// 0040fc70  ebee                 jmp 0x40fc60
// 0040fc72  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040fc75  e8d60c2900           call 0x6a0950
// 0040fc7a  b880fc4000           mov eax, 0x40fc80
// 0040fc7f  c3                   ret 
// 0040fc80  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040fc83  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040fc86  8b5508               mov edx, dword ptr [ebp + 8]
// 0040fc89  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040fc8c  8902                 mov dword ptr [edx], eax
// 0040fc8e  8bc7                 mov eax, edi
// 0040fc90  5f                   pop edi
// 0040fc91  5e                   pop esi
// 0040fc92  64890d00000000       mov dword ptr fs:[0], ecx
// 0040fc99  5b                   pop ebx
// 0040fc9a  8be5                 mov esp, ebp
// 0040fc9c  5d                   pop ebp
// 0040fc9d  c3                   ret 
// 0040fc9e  cc                   int3 
// 0040fc9f  cc                   int3 
// 0040fca0  56                   push esi
// 0040fca1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040fca5  85f6                 test esi, esi
// 0040fca7  7509                 jne 0x40fcb2
// 0040fca9  b857000780           mov eax, 0x80070057
// 0040fcae  5e                   pop esi
// 0040fcaf  c20800               ret 8
// 0040fcb2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040fcb6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0040fcb9  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0040fcbc  2bc2                 sub eax, edx
// 0040fcbe  c1f803               sar eax, 3
// 0040fcc1  3bf0                 cmp esi, eax
// 0040fcc3  7702                 ja 0x40fcc7
// 0040fcc5  8bc6                 mov eax, esi
// 0040fcc7  8d14c2               lea edx, [edx + eax*8]
// 0040fcca  895110               mov dword ptr [ecx + 0x10], edx
// 0040fccd  33c9                 xor ecx, ecx
// 0040fccf  3bf0                 cmp esi, eax
// 0040fcd1  0f95c1               setne cl
// 0040fcd4  5e                   pop esi
// 0040fcd5  8bc1                 mov eax, ecx
// 0040fcd7  c20800               ret 8

// from server: 100% by colin
// roc 2008-06 0040fbf0  unit: VCBrowserViewExternal::?$CComAggObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fbf0
//
// 0040fbf0  55                   push ebp
// 0040fbf1  8bec                 mov ebp, esp
// 0040fbf3  6aff                 push -1
// 0040fbf5  6810d57b00           push 0x7bd510
// 0040fbfa  64a100000000         mov eax, dword ptr fs:[0]
// 0040fc00  50                   push eax
// 0040fc01  64892500000000       mov dword ptr fs:[0], esp
// 0040fc08  83ec10               sub esp, 0x10
// 0040fc0b  53                   push ebx
// 0040fc0c  56                   push esi
// 0040fc0d  57                   push edi
// 0040fc0e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040fc11  33f6                 xor esi, esi
// 0040fc13  bf0e000780           mov edi, 0x8007000e
// 0040fc18  6a20                 push 0x20
// 0040fc1a  897dec               mov dword ptr [ebp - 0x14], edi
// 0040fc1d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0040fc20  8975fc               mov dword ptr [ebp - 4], esi
// 0040fc23  e8f80c2900           call 0x6a0920
// 0040fc28  83c404               add esp, 4
// 0040fc2b  3bc6                 cmp eax, esi
// 0040fc2d  743f                 je 0x40fc6e
// 0040fc2f  897018               mov dword ptr [eax + 0x18], esi
// 0040fc32  897010               mov dword ptr [eax + 0x10], esi
// 0040fc35  89700c               mov dword ptr [eax + 0xc], esi
// 0040fc38  c7400888d38000       mov dword ptr [eax + 8], 0x80d388
// 0040fc3f  33c9                 xor ecx, ecx
// 0040fc41  6689481c             mov word ptr [eax + 0x1c], cx
// 0040fc45  c70078d78000         mov dword ptr [eax], 0x80d778
// 0040fc4b  c7400460d78000       mov dword ptr [eax + 4], 0x80d760
// 0040fc52  c740083cd78000       mov dword ptr [eax + 8], 0x80d73c
// 0040fc59  c7401414d78000       mov dword ptr [eax + 0x14], 0x80d714
// 0040fc60  3bc6                 cmp eax, esi
// 0040fc62  7422                 je 0x40fc86
// 0040fc64  ff4018               inc dword ptr [eax + 0x18]
// 0040fc67  33ff                 xor edi, edi
// 0040fc69  ff4818               dec dword ptr [eax + 0x18]
// 0040fc6c  eb18                 jmp 0x40fc86
// 0040fc6e  33c0                 xor eax, eax
// 0040fc70  ebee                 jmp 0x40fc60

// from server: 97% by colin
// roc 2008-06 0040fbf0  unit: VCBrowserViewExternal::?$CComAggObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fbf0
//
// from server: 97% by colin
// roc 2008-06 0040fbf0  unit: VCBrowserViewExternal::?$CComAggObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fbf0
//
// 0040fbf0  55                   push ebp
// 0040fbf1  8bec                 mov ebp, esp
// 0040fbf3  6aff                 push -1
// 0040fbf5  6810d57b00           push 0x7bd510
// 0040fbfa  64a100000000         mov eax, dword ptr fs:[0]
// 0040fc00  50                   push eax
// 0040fc01  64892500000000       mov dword ptr fs:[0], esp
// 0040fc08  83ec10               sub esp, 0x10
// 0040fc0b  53                   push ebx
// 0040fc0c  56                   push esi
// 0040fc0d  57                   push edi
// 0040fc0e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040fc11  33f6                 xor esi, esi
// 0040fc13  bf0e000780           mov edi, 0x8007000e
// 0040fc18  6a20                 push 0x20
// 0040fc1a  897dec               mov dword ptr [ebp - 0x14], edi
// 0040fc1d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0040fc20  8975fc               mov dword ptr [ebp - 4], esi
// 0040fc23  e8f80c2900           call 0x6a0920
// 0040fc28  83c404               add esp, 4
// 0040fc2b  3bc6                 cmp eax, esi
// 0040fc2d  743f                 je 0x40fc6e
// 0040fc2f  897018               mov dword ptr [eax + 0x18], esi
// 0040fc32  897010               mov dword ptr [eax + 0x10], esi
// 0040fc35  89700c               mov dword ptr [eax + 0xc], esi
// 0040fc38  c7400888d38000       mov dword ptr [eax + 8], 0x80d388
// 0040fc3f  33c9                 xor ecx, ecx
// 0040fc41  6689481c             mov word ptr [eax + 0x1c], cx
// 0040fc45  c70078d78000         mov dword ptr [eax], 0x80d778
// 0040fc4b  c7400460d78000       mov dword ptr [eax + 4], 0x80d760
// 0040fc52  c740083cd78000       mov dword ptr [eax + 8], 0x80d73c
// 0040fc59  c7401414d78000       mov dword ptr [eax + 0x14], 0x80d714
// 0040fc60  3bc6                 cmp eax, esi
// 0040fc62  7422                 je 0x40fc86
// 0040fc64  ff4018               inc dword ptr [eax + 0x18]
// 0040fc67  33ff                 xor edi, edi
// 0040fc69  ff4818               dec dword ptr [eax + 0x18]
// 0040fc6c  eb18                 jmp 0x40fc86
// 0040fc6e  33c0                 xor eax, eax
// 0040fc70  ebee                 jmp 0x40fc60

// from server: 92% by king_originala
// roc 2008-06 0040fbf0  unit: VCBrowserViewExternal::?$CComAggObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fbf0
//
// 0040fbf0  55                   push ebp
// 0040fbf1  8bec                 mov ebp, esp
// 0040fbf3  6aff                 push -1
// 0040fbf5  6810d57b00           push 0x7bd510
// 0040fbfa  64a100000000         mov eax, dword ptr fs:[0]
// 0040fc00  50                   push eax
// 0040fc01  64892500000000       mov dword ptr fs:[0], esp
// 0040fc08  83ec10               sub esp, 0x10
// 0040fc0b  53                   push ebx
// 0040fc0c  56                   push esi
// 0040fc0d  57                   push edi
// 0040fc0e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040fc11  33f6                 xor esi, esi
// 0040fc13  bf0e000780           mov edi, 0x8007000e
// 0040fc18  6a20                 push 0x20
// 0040fc1a  897dec               mov dword ptr [ebp - 0x14], edi
// 0040fc1d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0040fc20  8975fc               mov dword ptr [ebp - 4], esi
// 0040fc23  e8f80c2900           call 0x6a0920
// 0040fc28  83c404               add esp, 4
// 0040fc2b  3bc6                 cmp eax, esi
// 0040fc2d  743f                 je 0x40fc6e
// 0040fc2f  897018               mov dword ptr [eax + 0x18], esi
// 0040fc32  897010               mov dword ptr [eax + 0x10], esi
// 0040fc35  89700c               mov dword ptr [eax + 0xc], esi
// 0040fc38  c7400888d38000       mov dword ptr [eax + 8], 0x80d388
// 0040fc3f  33c9                 xor ecx, ecx
// 0040fc41  6689481c             mov word ptr [eax + 0x1c], cx
// 0040fc45  c70078d78000         mov dword ptr [eax], 0x80d778
// 0040fc4b  c7400460d78000       mov dword ptr [eax + 4], 0x80d760
// 0040fc52  c740083cd78000       mov dword ptr [eax + 8], 0x80d73c
// 0040fc59  c7401414d78000       mov dword ptr [eax + 0x14], 0x80d714
// 0040fc60  3bc6                 cmp eax, esi
// 0040fc62  7422                 je 0x40fc86
// 0040fc64  ff4018               inc dword ptr [eax + 0x18]
// 0040fc67  33ff                 xor edi, edi
// 0040fc69  ff4818               dec dword ptr [eax + 0x18]
// 0040fc6c  eb18                 jmp 0x40fc86
// 0040fc6e  33c0                 xor eax, eax
// 0040fc70  ebee                 jmp 0x40fc60

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern unsigned long tableBase[];
extern unsigned long table0[];
extern unsigned long table1[];
extern unsigned long table2[];
extern unsigned long table3[];

struct CException { void Delete(); };

struct S {
    unsigned long* v0;
    unsigned long* v1;
    unsigned long* volatile v2;
    unsigned long state;
    unsigned long outer;
    unsigned long* v3;
    volatile long references;
    volatile unsigned short flags;
    unsigned short padding;

    S();
};

inline S::S()
{
    references = 0;
    outer = 0;
    state = 0;
    v2 = tableBase;
    flags = 0;
    v0 = table0;
    v1 = table1;
    v2 = table2;
    v3 = table3;
}

long __cdecl CreateInstance(S** result)
{
    long status = (long)0x8007000EUL;
    S* object = 0;
    try {
        object = new S;
    }
    catch (CException* e) {
        e->Delete();
    }

    if (object) {
        ++object->references;
        status = 0;
        --object->references;
    }

    *result = object;
    return status;
}
