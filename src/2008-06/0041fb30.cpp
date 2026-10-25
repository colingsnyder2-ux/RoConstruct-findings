// from server: 100% by king_originala
// roc 2008-06 0041fb30  unit: CListCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fb30
//
// 0041fb30  51                   push ecx
// 0041fb31  56                   push esi
// 0041fb32  8bf1                 mov esi, ecx
// 0041fb34  83be54010000ff       cmp dword ptr [esi + 0x154], -1
// 0041fb3b  8d8654010000         lea eax, [esi + 0x154]
// 0041fb41  7556                 jne 0x41fb99
// 0041fb43  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0041fb49  6a00                 push 0
// 0041fb4b  684cac9200           push 0x92ac4c
// 0041fb50  687c909200           push 0x92907c
// 0041fb55  6a00                 push 0
// 0041fb57  50                   push eax
// 0041fb58  e8691c2800           call 0x6a17c6
// 0041fb5d  83c414               add esp, 0x14
// 0041fb60  85c0                 test eax, eax
// 0041fb62  7430                 je 0x41fb94
// 0041fb64  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 0041fb6a  6a00                 push 0
// 0041fb6c  684cac9200           push 0x92ac4c
// 0041fb71  687c909200           push 0x92907c
// 0041fb76  6a00                 push 0
// 0041fb78  56                   push esi
// 0041fb79  e8481c2800           call 0x6a17c6
// 0041fb7e  83c414               add esp, 0x14
// 0041fb81  8bc8                 mov ecx, eax
// 0041fb83  e8a8ffffff           call 0x41fb30
// 0041fb88  85c0                 test eax, eax
// 0041fb8a  7408                 je 0x41fb94
// 0041fb8c  b801000000           mov eax, 1
// 0041fb91  5e                   pop esi
// 0041fb92  59                   pop ecx
// 0041fb93  c3                   ret 
// 0041fb94  33c0                 xor eax, eax
// 0041fb96  5e                   pop esi
// 0041fb97  59                   pop ecx
// 0041fb98  c3                   ret 
// 0041fb99  833800               cmp dword ptr [eax], 0
// 0041fb9c  c744240400000000     mov dword ptr [esp + 4], 0
// 0041fba4  7d04                 jge 0x41fbaa
// 0041fba6  8d442404             lea eax, [esp + 4]
// 0041fbaa  8b00                 mov eax, dword ptr [eax]
// 0041fbac  5e                   pop esi
// 0041fbad  59                   pop ecx
// 0041fbae  c3                   ret 

struct CListCtrl {
    char pad_0x000[0x104];
    int field_0x104;
    char pad_0x108[0x154 - 0x108];
    int field_0x154;
    int sub_41fb30();
};

extern char sourceType;
extern char destinationType;
extern "C" CListCtrl* __cdecl sub_6a17c6(int, int, void*, void*, int);

int CListCtrl::sub_41fb30()
{
    CListCtrl* p = this;
    if (p->field_0x154 == -1) {
        if (sub_6a17c6(p->field_0x104, 0, &sourceType, &destinationType, 0)) {
            p = (CListCtrl*)p->field_0x104;
            p = sub_6a17c6((int)p, 0, &sourceType, &destinationType, 0);
            if (p->sub_41fb30() != 0)
                return 1;
        }
        return 0;
    }
    int r = 0;
    int* value = &p->field_0x154;
    if (*value < 0)
        value = &r;
    return *value;
}
