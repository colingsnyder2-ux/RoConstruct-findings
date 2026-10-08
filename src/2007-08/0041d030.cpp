// from server: 37% by colin
// roc 2007-08 0041d030  unit: InsertDecal  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d030
//
// 0041d030  51                   push ecx
// 0041d031  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041d035  33c0                 xor eax, eax
// 0041d037  890424               mov dword ptr [esp], eax
// 0041d03a  56                   push esi
// 0041d03b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d03f  88442404             mov byte ptr [esp + 4], al
// 0041d043  8b442404             mov eax, dword ptr [esp + 4]
// 0041d047  50                   push eax
// 0041d048  51                   push ecx
// 0041d049  8bce                 mov ecx, esi
// 0041d04b  e840ffffff           call 0x41cf90
// 0041d050  8bc6                 mov eax, esi
// 0041d052  5e                   pop esi
// 0041d053  59                   pop ecx
// 0041d054  c3                   ret 

struct InsertDecal {
    char pad[4];
    char field4;
    void sub_41CF90(int, char);
    InsertDecal* func(int);
};

InsertDecal* InsertDecal::func(int arg)
{
    char local = 0;
    sub_41CF90(arg, local);
    return this;
}
