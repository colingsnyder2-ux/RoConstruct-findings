// from server: 96% by king_originala
#pragma float_control(precise, off)

extern "C" {
extern void (__stdcall *glPushMatrix)();
extern void (__stdcall *glPopMatrix)();
extern void (__stdcall *glRotatef)(float, float, float, float);
extern void (__stdcall *glTranslatef)(float, float, float);

void* __stdcall createQuadric();
void __stdcall setQuadricNormals(void*, unsigned int);
void __stdcall drawCylinder(void*, double, double, double, int, int);
void __stdcall drawDisk(void*, double, double, int, int);
void __stdcall deleteQuadric(void*);
}

extern const float initialAngle;
extern const float translationScale;
extern const float reverseAngle;

void drawShape(float radius, float length)
{
    glPushMatrix();

    void (__stdcall *rotate)(float, float, float, float) = glRotatef;
    rotate(initialAngle, 0.0f, 1.0f, 0.0f);

    void (__stdcall *translate)(float, float, float) = glTranslatef;
    translate(0.0f, 0.0f, length * translationScale);

    void* quadric = createQuadric();
    setQuadricNormals(quadric, 100012);
    drawCylinder(quadric, radius, radius, length, 12, 1);
    deleteQuadric(quadric);

    translate(0.0f, 0.0f, length);
    quadric = createQuadric();
    setQuadricNormals(quadric, 100012);
    drawDisk(quadric, 0.0, radius, 12, 1);
    deleteQuadric(quadric);

    rotate(reverseAngle, 0.0f, 1.0f, 0.0f);
    translate(0.0f, 0.0f, length);
    quadric = createQuadric();
    setQuadricNormals(quadric, 100012);
    drawDisk(quadric, 0.0, radius, 12, 1);
    deleteQuadric(quadric);

    glPopMatrix();
}
