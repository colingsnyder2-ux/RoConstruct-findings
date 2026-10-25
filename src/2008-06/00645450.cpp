// from server: 100% by king_originala
// roc 2008-06 00645450  unit: RBX::HUMAN::Climbing  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645450
//
// 00645450  d9442408             fld dword ptr [esp + 8]
// 00645454  56                   push esi
// 00645455  8b742408             mov esi, dword ptr [esp + 8]
// 00645459  51                   push ecx
// 0064545a  8b0e                 mov ecx, dword ptr [esi]
// 0064545c  d91c24               fstp dword ptr [esp]
// 0064545f  e85cfdffff           call 0x6451c0
// 00645464  d944240c             fld dword ptr [esp + 0xc]
// 00645468  51                   push ecx
// 00645469  d91c24               fstp dword ptr [esp]
// 0064546c  56                   push esi
// 0064546d  e82effffff           call 0x6453a0
// 00645472  d9442414             fld dword ptr [esp + 0x14]
// 00645476  8b0e                 mov ecx, dword ptr [esi]
// 00645478  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064547c  8b01                 mov eax, dword ptr [ecx]
// 0064547e  8b4004               mov eax, dword ptr [eax + 4]
// 00645481  83c408               add esp, 8
// 00645484  52                   push edx
// 00645485  51                   push ecx
// 00645486  d91c24               fstp dword ptr [esp]
// 00645489  ffd0                 call eax
// 0064548b  5e                   pop esi
// 0064548c  c3                   ret 

struct Object {
    virtual void slot0();
    virtual void slot1(float value, int argument);
    void update(float value);
};

struct Holder {
    Object* object;
};

void __cdecl updateHolder(Holder* holder, float value);

void __cdecl process(Holder* holder, float value, int argument)
{
    holder->object->update(value);
    updateHolder(holder, value);
    holder->object->slot1(value, argument);
}
