// from server: 41% by colin
struct UnifiedImageWidget {
    char pad[0x14c];
    int field_14c;
    void construct(int a, int b, int c);
};

void sub_642370(void* self, int arg);
void sub_6010e0(void* self, int a, int b);
void sub_55af90(void* self, int arg);

void UnifiedImageWidget::construct(int a, int b, int c)
{
    sub_642370(this, a);
    *(int*)((char*)this + 0x00) = 0x84b91c;
    *(int*)((char*)this + 0x10) = 0x84b90c;
    *(int*)((char*)this + 0x14) = 0x84b904;
    *(int*)((char*)this + 0x20) = 0x84b8fc;
    *(int*)((char*)this + 0x24) = 0x84b8ec;
    *(int*)((char*)this + 0x44) = 0x84b8dc;
    *(int*)((char*)this + 0x64) = 0x84b8cc;
    *(int*)((char*)this + 0x84) = 0x84b8bc;
    *(int*)((char*)this + 0xa4) = 0x84b8ac;
    *(int*)((char*)this + 0xc4) = 0x84b89c;
    *(int*)((char*)this + 0x130) = 0x84b894;
    int* p = (int*)(*(int*)((char*)b + 4) + 4);
    sub_6010e0((char*)this + 0x14c, c, *p);
    sub_55af90(this, a);
}
