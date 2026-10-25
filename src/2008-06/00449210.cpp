// from server: 100% by king_originala
// roc 2008-06 00449210  unit: CRenderSettings  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449210
//
// 00449210  8b442404             mov eax, dword ptr [esp + 4]
// 00449214  3b8138010000         cmp eax, dword ptr [ecx + 0x138]
// 0044921a  7413                 je 0x44922f
// 0044921c  898138010000         mov dword ptr [ecx + 0x138], eax
// 00449222  c7442404ecd39600     mov dword ptr [esp + 4], 0x96d3ec
// 0044922a  e9d148fcff           jmp 0x40db00
// 0044922f  c20400               ret 4

struct CRenderSettings {
    char padding[0x138];
    int value;
    void setValue(int);
    void notify(void*);
};

void CRenderSettings::setValue(int v)
{
    if (v != value) {
        value = v;
        notify(reinterpret_cast<void*>(0x96d3ec));
    }
}
