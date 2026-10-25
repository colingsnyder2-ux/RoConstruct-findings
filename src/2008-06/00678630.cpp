// from server: 100% by king_originala
// roc 2008-06 00678630  unit: Ogre::RbxSceneManagerFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678630
//
// 00678630  56                   push esi
// 00678631  8b31                 mov esi, dword ptr [ecx]
// 00678633  2b742408             sub esi, dword ptr [esp + 8]
// 00678637  b81f85eb51           mov eax, 0x51eb851f
// 0067863c  4e                   dec esi
// 0067863d  f7ee                 imul esi
// 0067863f  c1fa05               sar edx, 5
// 00678642  8bc2                 mov eax, edx
// 00678644  c1e81f               shr eax, 0x1f
// 00678647  03c2                 add eax, edx
// 00678649  6bc064               imul eax, eax, 0x64
// 0067864c  2bf0                 sub esi, eax
// 0067864e  8d14b6               lea edx, [esi + esi*4]
// 00678651  8d449108             lea eax, [ecx + edx*4 + 8]
// 00678655  5e                   pop esi
// 00678656  c20400               ret 4

struct HistoryBuffer {
    int position;
    int reserved;
    char entries[100][20];
    char* get(int offset);
};

char* HistoryBuffer::get(int offset) {
    int index = position - offset - 1;
    return entries[index % 100];
}
