// from server: 100% by colin
// roc 2008-06 0040e940  unit: CBrowserView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e940
//
// 0040e940  51                   push ecx
// 0040e941  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040e947  8b08                 mov ecx, dword ptr [eax]
// 0040e949  8d1424               lea edx, [esp]
// 0040e94c  52                   push edx
// 0040e94d  50                   push eax
// 0040e94e  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 0040e951  ffd0                 call eax
// 0040e953  85c0                 test eax, eax
// 0040e955  751b                 jne 0x40e972
// 0040e957  66833c24ff           cmp word ptr [esp], -1
// 0040e95c  7514                 jne 0x40e972
// 0040e95e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e962  8b11                 mov edx, dword ptr [ecx]
// 0040e964  b801000000           mov eax, 1
// 0040e969  50                   push eax
// 0040e96a  8b02                 mov eax, dword ptr [edx]
// 0040e96c  ffd0                 call eax
// 0040e96e  59                   pop ecx
// 0040e96f  c20400               ret 4
// 0040e972  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e976  8b11                 mov edx, dword ptr [ecx]
// 0040e978  33c0                 xor eax, eax
// 0040e97a  50                   push eax
// 0040e97b  8b02                 mov eax, dword ptr [edx]
// 0040e97d  ffd0                 call eax
// 0040e97f  59                   pop ecx
// 0040e980  c20400               ret 4

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
