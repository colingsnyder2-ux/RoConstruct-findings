// roc 2011-06 00412e20  unit: CIDEBrowserView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412e20
//
// 00412e20  51                   push ecx
// 00412e21  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00412e27  8b08                 mov ecx, dword ptr [eax]
// 00412e29  8d1424               lea edx, [esp]
// 00412e2c  52                   push edx
// 00412e2d  50                   push eax
// 00412e2e  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00412e31  ffd0                 call eax
// 00412e33  85c0                 test eax, eax
// 00412e35  751b                 jne 0x412e52
// 00412e37  66833c24ff           cmp word ptr [esp], -1
// 00412e3c  7514                 jne 0x412e52
// 00412e3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412e42  8b11                 mov edx, dword ptr [ecx]
// 00412e44  b801000000           mov eax, 1
// 00412e49  50                   push eax
// 00412e4a  8b02                 mov eax, dword ptr [edx]
// 00412e4c  ffd0                 call eax
// 00412e4e  59                   pop ecx
// 00412e4f  c20400               ret 4
// 00412e52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412e56  8b11                 mov edx, dword ptr [ecx]
// 00412e58  33c0                 xor eax, eax
// 00412e5a  50                   push eax
// 00412e5b  8b02                 mov eax, dword ptr [edx]
// 00412e5d  ffd0                 call eax
// 00412e5f  59                   pop ecx
// 00412e60  c20400               ret 4
// copied from an identical function in another client (function ?invoke@CBrowserView@ns_ROCX00000b@@QAEXPAUCallback@2@@Z)

namespace ns_ROCX00000b {
struct Query {
    int (__stdcall **vtable)(Query*, short*);
};

struct Callback {
    virtual void invoke(int value);
};

struct CBrowserView {
    char padding[0xf0];
    Query* query;
    void invoke(Callback* callback);
};

void CBrowserView::invoke(Callback* callback) {
    short value;
    int result;
    if (query->vtable[31](query, &value) == 0 && value == -1)
        result = 1;
    else
        result = 0;
    callback->invoke(result);
}
}
