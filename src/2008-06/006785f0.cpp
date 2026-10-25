// from server: 100% by colin
// roc 2008-06 006785f0  unit: Ogre::RbxSceneManagerFactory  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006785f0
//
// 006785f0  8b01                 mov eax, dword ptr [ecx]
// 006785f2  56                   push esi
// 006785f3  99                   cdq 
// 006785f4  be64000000           mov esi, 0x64
// 006785f9  f7fe                 idiv esi
// 006785fb  8d0492               lea eax, [edx + edx*4]
// 006785fe  8b542408             mov edx, dword ptr [esp + 8]
// 00678602  8b32                 mov esi, dword ptr [edx]
// 00678604  89748108             mov dword ptr [ecx + eax*4 + 8], esi
// 00678608  8b7204               mov esi, dword ptr [edx + 4]
// 0067860b  8d448108             lea eax, [ecx + eax*4 + 8]
// 0067860f  897004               mov dword ptr [eax + 4], esi
// 00678612  8b7208               mov esi, dword ptr [edx + 8]
// 00678615  897008               mov dword ptr [eax + 8], esi
// 00678618  8b720c               mov esi, dword ptr [edx + 0xc]
// 0067861b  89700c               mov dword ptr [eax + 0xc], esi
// 0067861e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00678621  895010               mov dword ptr [eax + 0x10], edx
// 00678624  ff01                 inc dword ptr [ecx]
// 00678626  5e                   pop esi
// 00678627  c20400               ret 4

struct RbxSceneManagerFactory {
    int count;
    char pad[4];
    struct Entry {
        int a, b, c, d, e;
    } entries[100];
    void addEntry(const Entry* e);
};

void RbxSceneManagerFactory::addEntry(const Entry* e) {
    int idx = count % 100;
    Entry* dst = &entries[idx];
    *dst = *e;
    count++;
}
