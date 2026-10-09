// roc 2007-03 00727710  unit: seg_00720000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00727710
//
// 00727710  8b542404             mov edx, dword ptr [esp + 4]
// 00727714  8b02                 mov eax, dword ptr [edx]
// 00727716  56                   push esi
// 00727717  8b7008               mov esi, dword ptr [eax + 8]
// 0072771a  8932                 mov dword ptr [edx], esi
// 0072771c  8b7008               mov esi, dword ptr [eax + 8]
// 0072771f  807e2500             cmp byte ptr [esi + 0x25], 0
// 00727723  7503                 jne 0x727728
// 00727725  895604               mov dword ptr [esi + 4], edx
// 00727728  8b7204               mov esi, dword ptr [edx + 4]
// 0072772b  897004               mov dword ptr [eax + 4], esi
// 0072772e  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00727731  3b5104               cmp edx, dword ptr [ecx + 4]
// 00727734  5e                   pop esi
// 00727735  750c                 jne 0x727743
// 00727737  894104               mov dword ptr [ecx + 4], eax
// 0072773a  895008               mov dword ptr [eax + 8], edx
// 0072773d  894204               mov dword ptr [edx + 4], eax
// 00727740  c20400               ret 4
// 00727743  8b4a04               mov ecx, dword ptr [edx + 4]
// 00727746  3b5108               cmp edx, dword ptr [ecx + 8]
// 00727749  750c                 jne 0x727757
// 0072774b  894108               mov dword ptr [ecx + 8], eax
// 0072774e  895008               mov dword ptr [eax + 8], edx
// 00727751  894204               mov dword ptr [edx + 4], eax
// 00727754  c20400               ret 4
// 00727757  8901                 mov dword ptr [ecx], eax
// 00727759  895008               mov dword ptr [eax + 8], edx
// 0072775c  894204               mov dword ptr [edx + 4], eax
// 0072775f  c20400               ret 4
// copied from an identical function in another client (function ?insert@Target@ns_ROCX000009@@QAEXPAUNode@2@@Z)

namespace ns_ROCX000009 {
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
}
