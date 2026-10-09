// from server: 83% by colin
// roc 2007-08 006c92e0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c92e0
//
// 006c92e0  56                   push esi
// 006c92e1  57                   push edi
// 006c92e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c92e6  6a00                 push 0
// 006c92e8  8d4710               lea eax, [edi + 0x10]
// 006c92eb  50                   push eax
// 006c92ec  8bf1                 mov esi, ecx
// 006c92ee  e82dffffff           call 0x6c9220
// 006c92f3  8b5624               mov edx, dword ptr [esi + 0x24]
// 006c92f6  8d4e1c               lea ecx, [esi + 0x1c]
// 006c92f9  57                   push edi
// 006c92fa  52                   push edx
// 006c92fb  e810960000           call 0x6d2910
// 006c9300  837e1000             cmp dword ptr [esi + 0x10], 0
// 006c9304  7518                 jne 0x6c931e
// 006c9306  8b06                 mov eax, dword ptr [esi]
// 006c9308  8b4020               mov eax, dword ptr [eax + 0x20]
// 006c930b  6a00                 push 0
// 006c930d  6a32                 push 0x32
// 006c930f  6843cd0a00           push 0xacd43
// 006c9314  50                   push eax
// 006c9315  ff15eced7700         call dword ptr [0x77edec]
// 006c931b  894610               mov dword ptr [esi + 0x10], eax
// 006c931e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c9322  57                   push edi
// 006c9323  51                   push ecx
// 006c9324  8bce                 mov ecx, esi
// 006c9326  e8c5faffff           call 0x6c8df0
// 006c932b  5f                   pop edi
// 006c932c  5e                   pop esi
// 006c932d  c20800               ret 8

struct CXTPCommandBarAnimation_AnimateInfoArray
{
    void Add(void* info);
};

struct CXTPCommandBarAnimation
{
    char pad0[0x10];
    void* m_pTimer;
    char pad14[0x8];
    CXTPCommandBarAnimation_AnimateInfoArray m_arr;
    void AddAnimateInfo(void* info, void* info2);
};

extern "C" void __stdcall sub_6C9220(void* p, int zero);
extern "C" void __stdcall sub_6D2910(void* p, void* a, void* b);
extern "C" void __stdcall sub_6C8DF0(void* self, void* a, void* b);
extern "C" void* __stdcall SetTimer(void* hWnd, unsigned int nIDEvent, unsigned int uElapse, void* lpTimerFunc);

void CXTPCommandBarAnimation::AddAnimateInfo(void* info, void* info2)
{
    sub_6C9220((char*)info + 0x10, 0);
    sub_6D2910((char*)this + 0x1c, *(void**)((char*)this + 0x24), info);
    if (m_pTimer == 0)
    {
        void** vtbl = *(void***)this;
        void* hWnd = vtbl[8];
        m_pTimer = SetTimer(hWnd, 0xacd43, 0x32, 0);
    }
    sub_6C8DF0(this, info, info2);
}
