// roc 2009-12 0040d430  unit: CIDEBrowserView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d430
//
// 0040d430  51                   push ecx
// 0040d431  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d437  8b08                 mov ecx, dword ptr [eax]
// 0040d439  8d1424               lea edx, [esp]
// 0040d43c  52                   push edx
// 0040d43d  50                   push eax
// 0040d43e  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 0040d441  ffd0                 call eax
// 0040d443  85c0                 test eax, eax
// 0040d445  751b                 jne 0x40d462
// 0040d447  66833c24ff           cmp word ptr [esp], -1
// 0040d44c  7514                 jne 0x40d462
// 0040d44e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d452  8b11                 mov edx, dword ptr [ecx]
// 0040d454  b801000000           mov eax, 1
// 0040d459  50                   push eax
// 0040d45a  8b02                 mov eax, dword ptr [edx]
// 0040d45c  ffd0                 call eax
// 0040d45e  59                   pop ecx
// 0040d45f  c20400               ret 4
// 0040d462  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d466  8b11                 mov edx, dword ptr [ecx]
// 0040d468  33c0                 xor eax, eax
// 0040d46a  50                   push eax
// 0040d46b  8b02                 mov eax, dword ptr [edx]
// 0040d46d  ffd0                 call eax
// 0040d46f  59                   pop ecx
// 0040d470  c20400               ret 4
// copied from an identical function in another client (function ?invoke@CBrowserView@@QAEXPAUCallback@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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