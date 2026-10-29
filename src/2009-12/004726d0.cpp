// roc 2009-12 004726d0  unit: CTaskSchedulerPaneView  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004726d0
//
// 004726d0  56                   push esi
// 004726d1  8bf1                 mov esi, ecx
// 004726d3  8b06                 mov eax, dword ptr [esi]
// 004726d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 004726d8  6a77                 push 0x77
// 004726da  ffd2                 call edx
// 004726dc  84c0                 test al, al
// 004726de  7579                 jne 0x472759
// 004726e0  8b06                 mov eax, dword ptr [esi]
// 004726e2  8b5014               mov edx, dword ptr [eax + 0x14]
// 004726e5  6a73                 push 0x73
// 004726e7  8bce                 mov ecx, esi
// 004726e9  ffd2                 call edx
// 004726eb  84c0                 test al, al
// 004726ed  756a                 jne 0x472759
// 004726ef  8b06                 mov eax, dword ptr [esi]
// 004726f1  8b5014               mov edx, dword ptr [eax + 0x14]
// 004726f4  6a61                 push 0x61
// 004726f6  8bce                 mov ecx, esi
// 004726f8  ffd2                 call edx
// 004726fa  84c0                 test al, al
// 004726fc  755b                 jne 0x472759
// 004726fe  8b06                 mov eax, dword ptr [esi]
// 00472700  8b5014               mov edx, dword ptr [eax + 0x14]
// 00472703  6a64                 push 0x64
// 00472705  8bce                 mov ecx, esi
// 00472707  ffd2                 call edx
// 00472709  84c0                 test al, al
// 0047270b  754c                 jne 0x472759
// 0047270d  8b06                 mov eax, dword ptr [esi]
// 0047270f  8b5014               mov edx, dword ptr [eax + 0x14]
// 00472712  6811010000           push 0x111
// 00472717  8bce                 mov ecx, esi
// 00472719  ffd2                 call edx
// 0047271b  84c0                 test al, al
// 0047271d  753a                 jne 0x472759
// 0047271f  8b06                 mov eax, dword ptr [esi]
// 00472721  8b5014               mov edx, dword ptr [eax + 0x14]
// 00472724  6812010000           push 0x112
// 00472729  8bce                 mov ecx, esi
// 0047272b  ffd2                 call edx
// 0047272d  84c0                 test al, al
// 0047272f  7528                 jne 0x472759
// 00472731  8b06                 mov eax, dword ptr [esi]
// 00472733  8b5014               mov edx, dword ptr [eax + 0x14]
// 00472736  6814010000           push 0x114
// 0047273b  8bce                 mov ecx, esi
// 0047273d  ffd2                 call edx
// 0047273f  84c0                 test al, al
// 00472741  7516                 jne 0x472759
// 00472743  8b06                 mov eax, dword ptr [esi]
// 00472745  8b5014               mov edx, dword ptr [eax + 0x14]
// 00472748  6813010000           push 0x113
// 0047274d  8bce                 mov ecx, esi
// 0047274f  ffd2                 call edx
// 00472751  84c0                 test al, al
// 00472753  7504                 jne 0x472759
// 00472755  33c0                 xor eax, eax
// 00472757  5e                   pop esi
// 00472758  c3                   ret 
// 00472759  b801000000           mov eax, 1
// 0047275e  5e                   pop esi
// 0047275f  c3                   ret 
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