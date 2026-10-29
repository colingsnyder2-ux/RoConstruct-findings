// roc 2009-06 00469930  unit: CTaskSchedulerPaneView  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00469930
//
// 00469930  56                   push esi
// 00469931  8bf1                 mov esi, ecx
// 00469933  8b06                 mov eax, dword ptr [esi]
// 00469935  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469938  6a77                 push 0x77
// 0046993a  ffd2                 call edx
// 0046993c  84c0                 test al, al
// 0046993e  7579                 jne 0x4699b9
// 00469940  8b06                 mov eax, dword ptr [esi]
// 00469942  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469945  6a73                 push 0x73
// 00469947  8bce                 mov ecx, esi
// 00469949  ffd2                 call edx
// 0046994b  84c0                 test al, al
// 0046994d  756a                 jne 0x4699b9
// 0046994f  8b06                 mov eax, dword ptr [esi]
// 00469951  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469954  6a61                 push 0x61
// 00469956  8bce                 mov ecx, esi
// 00469958  ffd2                 call edx
// 0046995a  84c0                 test al, al
// 0046995c  755b                 jne 0x4699b9
// 0046995e  8b06                 mov eax, dword ptr [esi]
// 00469960  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469963  6a64                 push 0x64
// 00469965  8bce                 mov ecx, esi
// 00469967  ffd2                 call edx
// 00469969  84c0                 test al, al
// 0046996b  754c                 jne 0x4699b9
// 0046996d  8b06                 mov eax, dword ptr [esi]
// 0046996f  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469972  6811010000           push 0x111
// 00469977  8bce                 mov ecx, esi
// 00469979  ffd2                 call edx
// 0046997b  84c0                 test al, al
// 0046997d  753a                 jne 0x4699b9
// 0046997f  8b06                 mov eax, dword ptr [esi]
// 00469981  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469984  6812010000           push 0x112
// 00469989  8bce                 mov ecx, esi
// 0046998b  ffd2                 call edx
// 0046998d  84c0                 test al, al
// 0046998f  7528                 jne 0x4699b9
// 00469991  8b06                 mov eax, dword ptr [esi]
// 00469993  8b5014               mov edx, dword ptr [eax + 0x14]
// 00469996  6814010000           push 0x114
// 0046999b  8bce                 mov ecx, esi
// 0046999d  ffd2                 call edx
// 0046999f  84c0                 test al, al
// 004699a1  7516                 jne 0x4699b9
// 004699a3  8b06                 mov eax, dword ptr [esi]
// 004699a5  8b5014               mov edx, dword ptr [eax + 0x14]
// 004699a8  6813010000           push 0x113
// 004699ad  8bce                 mov ecx, esi
// 004699af  ffd2                 call edx
// 004699b1  84c0                 test al, al
// 004699b3  7504                 jne 0x4699b9
// 004699b5  33c0                 xor eax, eax
// 004699b7  5e                   pop esi
// 004699b8  c3                   ret 
// 004699b9  b801000000           mov eax, 1
// 004699be  5e                   pop esi
// 004699bf  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAE_NXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual bool key(int code) = 0;

    bool f();
};

bool S::f()
{
    return key(0x77) ||
           key(0x73) ||
           key(0x61) ||
           key(0x64) ||
           key(0x111) ||
           key(0x112) ||
           key(0x114) ||
           key(0x113);
}