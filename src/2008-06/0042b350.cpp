// from server: 100% by king_originala
// roc 2008-06 0042b350  unit: EventHandler  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b350
//
// 0042b350  56                   push esi
// 0042b351  8b742408             mov esi, dword ptr [esp + 8]
// 0042b355  834628ff             add dword ptr [esi + 0x28], -1
// 0042b359  8b4628               mov eax, dword ptr [esi + 0x28]
// 0042b35c  752b                 jne 0x42b389
// 0042b35e  8b4608               mov eax, dword ptr [esi + 8]
// 0042b361  85c0                 test eax, eax
// 0042b363  7419                 je 0x42b37e
// 0042b365  8b00                 mov eax, dword ptr [eax]
// 0042b367  8d4e10               lea ecx, [esi + 0x10]
// 0042b36a  85c0                 test eax, eax
// 0042b36c  7409                 je 0x42b377
// 0042b36e  6a01                 push 1
// 0042b370  51                   push ecx
// 0042b371  51                   push ecx
// 0042b372  ffd0                 call eax
// 0042b374  83c40c               add esp, 0xc
// 0042b377  c7460800000000       mov dword ptr [esi + 8], 0
// 0042b37e  56                   push esi
// 0042b37f  e8f6522700           call 0x6a067a
// 0042b384  83c404               add esp, 4
// 0042b387  33c0                 xor eax, eax
// 0042b389  5e                   pop esi
// 0042b38a  c20400               ret 4

typedef void (__cdecl *Callback)(void *, void *, int);

struct CallbackTable {
    Callback callback;
};

struct S {
    unsigned long unused[2];
    CallbackTable *table;
    unsigned long reserved;
    unsigned char data[24];
    unsigned long references;
};

extern void __cdecl release(void *);

unsigned long __stdcall function(S *p)
{
    unsigned long result = --p->references;
    if (result == 0) {
        if (p->table) {
            Callback callback = p->table->callback;
            void *data = p->data;
            if (callback)
                callback(data, data, 1);
            p->table = 0;
        }
        release(p);
        result = 0;
    }
    return result;
}
