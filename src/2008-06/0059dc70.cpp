// from server: 100% by king_originala
// roc 2008-06 0059dc70  unit: VCRenderSettings::?$EnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059dc70
//
// 0059dc70  83ec18               sub esp, 0x18
// 0059dc73  56                   push esi
// 0059dc74  8bf1                 mov esi, ecx
// 0059dc76  56                   push esi
// 0059dc77  e814570000           call 0x5a3390
// 0059dc7c  83c404               add esp, 4
// 0059dc7f  85c0                 test eax, eax
// 0059dc81  740e                 je 0x59dc91
// 0059dc83  8d8e28020000         lea ecx, [esi + 0x228]
// 0059dc89  51                   push ecx
// 0059dc8a  8bc8                 mov ecx, eax
// 0059dc8c  e82fc80400           call 0x5ea4c0
// 0059dc91  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059dc95  d900                 fld dword ptr [eax]
// 0059dc97  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 0059dc9d  83e901               sub ecx, 1
// 0059dca0  d95c2404             fstp dword ptr [esp + 4]
// 0059dca4  d94004               fld dword ptr [eax + 4]
// 0059dca7  d95c2408             fstp dword ptr [esp + 8]
// 0059dcab  d94008               fld dword ptr [eax + 8]
// 0059dcae  d95c240c             fstp dword ptr [esp + 0xc]
// 0059dcb2  7410                 je 0x59dcc4
// 0059dcb4  83e901               sub ecx, 1
// 0059dcb7  7518                 jne 0x59dcd1
// 0059dcb9  d94004               fld dword ptr [eax + 4]
// 0059dcbc  d80dc0888200         fmul dword ptr [0x8288c0]
// 0059dcc2  eb09                 jmp 0x59dccd
// 0059dcc4  d94004               fld dword ptr [eax + 4]
// 0059dcc7  d80d606e8200         fmul dword ptr [0x826e60]
// 0059dccd  d95c2408             fstp dword ptr [esp + 8]
// 0059dcd1  8d542404             lea edx, [esp + 4]
// 0059dcd5  52                   push edx
// 0059dcd6  8d442414             lea eax, [esp + 0x14]
// 0059dcda  50                   push eax
// 0059dcdb  8bce                 mov ecx, esi
// 0059dcdd  e8cec1ffff           call 0x599eb0
// 0059dce2  50                   push eax
// 0059dce3  8bce                 mov ecx, esi
// 0059dce5  e8a6feffff           call 0x59db90
// 0059dcea  8bce                 mov ecx, esi
// 0059dcec  e8ffd7ffff           call 0x59b4f0
// 0059dcf1  56                   push esi
// 0059dcf2  e899560000           call 0x5a3390
// 0059dcf7  83c404               add esp, 4
// 0059dcfa  85c0                 test eax, eax
// 0059dcfc  740e                 je 0x59dd0c
// 0059dcfe  81c628020000         add esi, 0x228
// 0059dd04  56                   push esi
// 0059dd05  8bc8                 mov ecx, eax
// 0059dd07  e8c4c80400           call 0x5ea5d0
// 0059dd0c  5e                   pop esi
// 0059dd0d  83c418               add esp, 0x18
// 0059dd10  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct Listener {
    void begin(void*);
    void end(void*);
};

struct S {
    char padding0[0x1e0];
    int mode;
    char padding1[0x44];
    char notification;

    Vector3 convert(const Vector3&);
    void apply(const Vector3&);
    void update();
    void f(const Vector3&);
};

extern void* __cdecl func_005a3390(S*);
extern const float scale1;
extern const float scale2;

void S::f(const Vector3& input)
{
    Listener* listener = static_cast<Listener*>(func_005a3390(this));
    if (listener)
        listener->begin(&notification);

    Vector3 value = { input.x, input.y, input.z };

    switch (mode) {
    case 1:
        value.y = *(const volatile float*)&input.y * scale1;
        break;
    case 2:
        value.y = *(const volatile float*)&input.y * scale2;
        break;
    }

    apply(convert(value));
    update();

    listener = static_cast<Listener*>(func_005a3390(this));
    if (listener)
        listener->end(&notification);
}
