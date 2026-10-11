// from server: 97% by colin
struct SceneManager {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void clear();
};

extern "C" void __cdecl G3D_free(void* p);
extern "C" void __cdecl G3D_alignedFree(void* p);
extern "C" void __cdecl sub_6a165b(void* p, int a, int b, void* c);

void SceneManager::clear()
{
    int i = 0;
    if (fieldC > 0) {
        do {
            int* node = (int*)((char*)field8 + i * 4);
            int* cur = (int*)*node;
            if (cur) {
                do {
                    int* next = (int*)cur[5];
                    sub_6a165b((char*)cur + 0x10, 4, 1, (void*)0x502a70);
                    G3D_free(cur);
                    cur = next;
                } while (cur);
            }
            i++;
        } while (i < fieldC);
    }
    G3D_alignedFree((void*)field8);
    field8 = 0;
    fieldC = 0;
    field4 = 0;
}
