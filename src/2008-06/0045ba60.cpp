// from server: 100% by king_originala
// roc 2008-06 0045ba60  unit: CRobloxWnd  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ba60
//
// 0045ba60  56                   push esi
// 0045ba61  686cdf9600           push 0x96df6c
// 0045ba66  8bf1                 mov esi, ecx
// 0045ba68  ff15d4228000         call dword ptr [0x8022d4]
// 0045ba6e  dd442408             fld qword ptr [esp + 8]
// 0045ba72  686cdf9600           push 0x96df6c
// 0045ba77  dd5e3c               fstp qword ptr [esi + 0x3c]
// 0045ba7a  ff15f4218000         call dword ptr [0x8021f4]
// 0045ba80  5e                   pop esi
// 0045ba81  c20800               ret 8

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void *);
    extern void (__stdcall *LeaveCriticalSection)(void *);
}

unsigned char criticalSection[24];

#pragma pack(push, 4)
struct CRobloxWnd {
    unsigned char padding[0x3c];
    double value;
    void setValue(double v);
};
#pragma pack(pop)

void CRobloxWnd::setValue(double v)
{
    EnterCriticalSection(criticalSection);
    value = v;
    LeaveCriticalSection(criticalSection);
}
