// from server: 78% by colin
struct GuiLayerCollector {
    int loadZVectorsHelper(char* a, char* b, char* c, char* d, char* e, char* f);
    int loadZVectors();
};

extern "C" int __cdecl sub_764490(char*, char*, char*, char*, char*, char*);

int GuiLayerCollector::loadZVectors()
{
    char* p1;
    char* p2;
    char* p3;
    char* p4;
    char* p5;
    char* p6;
    char flag = 0;
    sub_764490(p1, p2, p3, p4, p5, p6);
    int diff = (int)p5 - (int)p1;
    int q = diff / 24;
    return (int)p4 - q * 24;
}
