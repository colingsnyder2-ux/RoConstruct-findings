// from server: 61% by colin
struct Body {
    char pad0[4];
    char flag4;
    char pad5[0x87];
    float rotX;
    float rotY;
    float rotZ;
};

struct JointConnector {
    char pad0[8];
    float k;
    char pad12[8];
    void* body0ptr;
    void* body1ptr;
    char pad24[0xc];
    float currentAngle;
    float desiredAngle;
    float increment;
    char zeroVelocity;
};

struct RotateConnector : JointConnector {
    void computeForce(bool throttling);
};

extern float g_rotateScale;

void RotateConnector::computeForce(bool throttling)
{
    float normal[3];
    normal[0] = 0.0f;
    normal[1] = 0.0f;
    normal[2] = 0.0f;

    float angle = 0.0f;

    // call computeJointAngle-like helper at 0x6199f0
    extern float computeJointAngleHelper(RotateConnector* self, float* out, float* a, float* b);
    computeJointAngleHelper(this, normal, &angle, &angle);

    if (zeroVelocity) {
        currentAngle = (currentAngle + angle) * g_rotateScale;
        zeroVelocity = 0;
    }

    currentAngle += increment;

    float delta = currentAngle - desiredAngle;
    float f = delta * k;

    float nx = normal[0] * f;
    float ny = normal[1] * f;
    float nz = normal[2] * f;

    float tx = -ny;
    float ty = -nz;
    float tz = -nx;

    Body* b0 = (Body*)body0ptr;
    if (b0) {
        if (b0->flag4) {
            extern void bodyWake(Body*);
            bodyWake(b0);
        }
        b0->rotX += tx;
        b0->rotY += ty;
        b0->rotZ += tz;
    }

    Body* b1 = (Body*)body1ptr;
    if (b1) {
        if (b1->flag4) {
            extern void bodyWake(Body*);
            bodyWake(b1);
        }
        b1->rotX += -tx;
        b1->rotY += -ty;
        b1->rotZ += -tz;
    }
}
