// from server: 100% by colin
// roc 2007-08 00402c40  unit: VCWorkspace::?$CComObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402c40
//
// 00402c40  8b442404             mov eax, dword ptr [esp + 4]
// 00402c44  83403001             add dword ptr [eax + 0x30], 1
// 00402c48  8b4030               mov eax, dword ptr [eax + 0x30]
// 00402c4b  c20400               ret 4

struct S {
    char pad[0x30];
    int value30;
};

int __stdcall f(S* s)
{
    s->value30 = s->value30 + 1;
    return s->value30;
}
