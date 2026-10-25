// from server: 100% by king_originala
// roc 2008-06 00567180  unit: RBX::Selection  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567180
//
// 00567180  8d442404             lea eax, [esp + 4]
// 00567184  50                   push eax
// 00567185  81c15c010000         add ecx, 0x15c
// 0056718b  e810a2ebff           call 0x4213a0
// 00567190  c20400               ret 4

struct Listener {
    void invoke(void** value);
};

struct Selection {
    char padding[0x15c];
    Listener listener;

    void notify(void* value);
};

void Selection::notify(void* value)
{
    listener.invoke(&value);
}
