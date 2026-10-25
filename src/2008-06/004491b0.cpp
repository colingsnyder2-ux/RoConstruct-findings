// from server: 100% by king_originala
// roc 2008-06 004491b0  unit: CRenderSettings  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004491b0
//
// 004491b0  8b442404             mov eax, dword ptr [esp + 4]
// 004491b4  3b8140010000         cmp eax, dword ptr [ecx + 0x140]
// 004491ba  7413                 je 0x4491cf
// 004491bc  898140010000         mov dword ptr [ecx + 0x140], eax
// 004491c2  c744240480d39600     mov dword ptr [esp + 4], 0x96d380
// 004491ca  e93149fcff           jmp 0x40db00
// 004491cf  c20400               ret 4

struct CRenderSettings {
    char padding[0x140];
    int value;
    void setValue(int);
    void notify(void*);
};

void CRenderSettings::setValue(int v)
{
    if (v != value) {
        value = v;
        notify(reinterpret_cast<void*>(0x96d380));
    }
}
