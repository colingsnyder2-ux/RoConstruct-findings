// from server: 70% by colin
// roc 2007-08 00623100  unit: RBX::ArrowPanel  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00623100
//
// 00623100  56                   push esi
// 00623101  8bf1                 mov esi, ecx
// 00623103  8b06                 mov eax, dword ptr [esi]
// 00623105  8b5058               mov edx, dword ptr [eax + 0x58]
// 00623108  ffd2                 call edx
// 0062310a  84c0                 test al, al
// 0062310c  7414                 je 0x623122
// 0062310e  57                   push edi
// 0062310f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00623113  57                   push edi
// 00623114  8bce                 mov ecx, esi
// 00623116  e8752ff3ff           call 0x556090
// 0062311b  8bc7                 mov eax, edi
// 0062311d  5f                   pop edi
// 0062311e  5e                   pop esi
// 0062311f  c20400               ret 4
// 00623122  e849e4edff           call 0x501570
// 00623127  d900                 fld dword ptr [eax]
// 00623129  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062312d  d919                 fstp dword ptr [ecx]
// 0062312f  5e                   pop esi
// 00623130  d94004               fld dword ptr [eax + 4]
// 00623133  8bc1                 mov eax, ecx
// 00623135  d95904               fstp dword ptr [ecx + 4]
// 00623138  c20400               ret 4

struct ArrowPanel {
    bool canRender() const;
    void renderAdorn(void* adorn);
};

extern float* getCoordinateFrame();

bool ArrowPanel::canRender() const
{
    return false;
}

void ArrowPanel::renderAdorn(void* adorn)
{
    if (((bool (__thiscall*)(const ArrowPanel*))((*(void***)this)[0x58 / 4]))(this)) {
        renderAdorn(adorn);
    } else {
        float* cf = getCoordinateFrame();
        *(float*)adorn = cf[0];
        *(float*)((char*)adorn + 4) = cf[1];
    }
}
