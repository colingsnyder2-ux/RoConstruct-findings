// from server: 100% by colin
// roc 2007-08 00727190  unit: boost::thread_resource_error  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727190
//
// 00727190  8b542404             mov edx, dword ptr [esp + 4]
// 00727194  8b02                 mov eax, dword ptr [edx]
// 00727196  56                   push esi
// 00727197  8b7008               mov esi, dword ptr [eax + 8]
// 0072719a  8932                 mov dword ptr [edx], esi
// 0072719c  8b7008               mov esi, dword ptr [eax + 8]
// 0072719f  807e2500             cmp byte ptr [esi + 0x25], 0
// 007271a3  7503                 jne 0x7271a8
// 007271a5  895604               mov dword ptr [esi + 4], edx
// 007271a8  8b7204               mov esi, dword ptr [edx + 4]
// 007271ab  897004               mov dword ptr [eax + 4], esi
// 007271ae  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 007271b1  3b5104               cmp edx, dword ptr [ecx + 4]
// 007271b4  5e                   pop esi
// 007271b5  750c                 jne 0x7271c3
// 007271b7  894104               mov dword ptr [ecx + 4], eax
// 007271ba  895008               mov dword ptr [eax + 8], edx
// 007271bd  894204               mov dword ptr [edx + 4], eax
// 007271c0  c20400               ret 4
// 007271c3  8b4a04               mov ecx, dword ptr [edx + 4]
// 007271c6  3b5108               cmp edx, dword ptr [ecx + 8]
// 007271c9  750c                 jne 0x7271d7
// 007271cb  894108               mov dword ptr [ecx + 8], eax
// 007271ce  895008               mov dword ptr [eax + 8], edx
// 007271d1  894204               mov dword ptr [edx + 4], eax
// 007271d4  c20400               ret 4
// 007271d7  8901                 mov dword ptr [ecx], eax
// 007271d9  895008               mov dword ptr [eax + 8], edx
// 007271dc  894204               mov dword ptr [edx + 4], eax
// 007271df  c20400               ret 4

struct Node {
    Node* field_0;
    Node* field_4;
    Node* field_8;
    char pad_0xC[0x19];
    char field_25;
};

struct Container {
    char pad_0x0[0x18];
    Node* field_18;
};

struct Target {
    void insert(Node* arg);
};

void Target::insert(Node* arg)
{
    Node* edx = arg;
    Node* eax = edx->field_0;
    Node* esi = eax->field_8;
    edx->field_0 = esi;
    esi = eax->field_8;
    if (esi->field_25 == 0)
        esi->field_4 = edx;
    esi = edx->field_4;
    eax->field_4 = esi;
    Container* ecx = (Container*)this;
    Node* c = ecx->field_18;
    if (edx == c->field_4)
    {
        c->field_4 = eax;
        eax->field_8 = edx;
        edx->field_4 = eax;
        return;
    }
    Node* ecx2 = edx->field_4;
    if (edx == ecx2->field_8)
    {
        ecx2->field_8 = eax;
        eax->field_8 = edx;
        edx->field_4 = eax;
        return;
    }
    ecx2->field_0 = eax;
    eax->field_8 = edx;
    edx->field_4 = eax;
}
