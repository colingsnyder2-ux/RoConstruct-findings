// from server: 100% by tester
// roc 2010-06 00667520  unit: RBX::VBasicPartInstance::?$ActionStation  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667520
//
// 00667520  83b98802000001       cmp dword ptr [ecx + 0x288], 1
// 00667527  740a                 je 0x667533
// 00667529  8b442404             mov eax, dword ptr [esp + 4]
// 0066752d  c70000000000         mov dword ptr [eax], 0
// 00667533  c20400               ret 4

struct S
{
    void ActionStation(int* result);
    int pad[162];
};

void S::ActionStation(int* result)
{
    if (pad[162] == 1)
        return;

    *result = 0;
}
