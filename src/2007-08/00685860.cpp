// from server: 35% by colin
// roc 2007-08 00685860  unit: CInstanceRecord::CNameItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685860
//
// 00685860  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685864  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685868  8b01                 mov eax, dword ptr [ecx]
// 0068586a  8b4060               mov eax, dword ptr [eax + 0x60]
// 0068586d  52                   push edx
// 0068586e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685872  52                   push edx
// 00685873  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685877  52                   push edx
// 00685878  ffd0                 call eax
// 0068587a  c3                   ret 

struct CNameItem {
    void construct(const char* name, unsigned int attributes, int value, unsigned int index, void* owner);
};

void CNameItem::construct(const char* name, unsigned int attributes, int value, unsigned int index, void* owner) {
    typedef void (__thiscall *Fn)(void*, const char*, unsigned int, int, unsigned int, void*);
    Fn fn = *(Fn*)(*(char**)this + 0x60);
    fn(this, name, attributes, value, index, owner);
}
