// from server: 81% by colin
// roc 2007-08 00690220  unit: CXTPDockingPane  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690220
//
// 00690220  56                   push esi
// 00690221  57                   push edi
// 00690222  8bf1                 mov esi, ecx
// 00690224  e817030500           call 0x6e0540
// 00690229  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0069022c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00690230  8b10                 mov edx, dword ptr [eax]
// 00690232  57                   push edi
// 00690233  51                   push ecx
// 00690234  8bc8                 mov ecx, eax
// 00690236  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0069023c  ffd0                 call eax
// 0069023e  85c0                 test eax, eax
// 00690240  7405                 je 0x690247
// 00690242  8d78e0               lea edi, [eax - 0x20]
// 00690245  eb02                 jmp 0x690249
// 00690247  33ff                 xor edi, edi
// 00690249  8b17                 mov edx, dword ptr [edi]
// 0069024b  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0069024e  8d46e0               lea eax, [esi - 0x20]
// 00690251  50                   push eax
// 00690252  8bcf                 mov ecx, edi
// 00690254  ffd2                 call edx
// 00690256  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069025a  8d46e0               lea eax, [esi - 0x20]
// 0069025d  83c720               add edi, 0x20
// 00690260  f7d8                 neg eax
// 00690262  1bc0                 sbb eax, eax
// 00690264  23c6                 and eax, esi
// 00690266  50                   push eax
// 00690267  e83451faff           call 0x6353a0
// 0069026c  8938                 mov dword ptr [eax], edi
// 0069026e  8bc7                 mov eax, edi
// 00690270  5f                   pop edi
// 00690271  5e                   pop esi
// 00690272  c20c00               ret 0xc

struct CXTPDockingPane
{
    void* FindPane(void* pane, void* arg2, void* arg3);
};

extern "C" void* __stdcall sub_6e0540();
extern "C" void* __stdcall sub_6353a0(void* pane, void* arg);

void* CXTPDockingPane::FindPane(void* pane, void* arg2, void* arg3)
{
    void* mgr = sub_6e0540();
    void* vtable = *(void**)mgr;
    typedef void* (__thiscall *Fn)(void*, void*, void*);
    Fn fn = *(Fn*)((char*)vtable + 0x144);
    void* found = fn(mgr, *(void**)((char*)this + 0x18), pane);
    void* result;
    if (found != 0)
        result = (char*)found - 0x20;
    else
        result = 0;
    void* vtable2 = *(void**)result;
    typedef void (__thiscall *Fn2)(void*, void*);
    Fn2 fn2 = *(Fn2*)((char*)vtable2 + 0x6c);
    fn2(result, (char*)this - 0x20);
    void* arg = *(void**)((char*)this + 0x10);
    void* self = (char*)this - 0x20;
    void* adjusted = (self != 0) ? this : 0;
    void* r = sub_6353a0(adjusted, arg);
    *(void**)r = (char*)result + 0x20;
    return (char*)result + 0x20;
}
