// from server: 90% by king_originala
struct Vector {
    float x, y, z;
};

struct Matrix {
    float m00, m01, m02;
    float m10, m11, m12;
    float m20, m21, m22;
};

void __cdecl multiply(const Matrix* left, const Matrix* right, Matrix* result);

Vector* __cdecl transform(Vector* result, const Matrix* matrix,
                          const Vector* scale, const Vector* vector)
{
    Matrix scaled;
    Matrix product;

    scaled.m00 = matrix->m00 * scale->x;
    scaled.m01 = matrix->m01 * scale->y;
    scaled.m02 = matrix->m02 * scale->z;
    scaled.m10 = matrix->m10 * scale->x;
    scaled.m11 = matrix->m11 * scale->y;
    scaled.m12 = matrix->m12 * scale->z;
    scaled.m20 = matrix->m20 * scale->x;
    scaled.m21 = matrix->m21 * scale->y;
    scaled.m22 = matrix->m22 * scale->z;

    multiply(&scaled, matrix, &product);

    result->x = 0.0f;
    result->y = 0.0f;
    result->z = 0.0f;

    result->x = product.m00 * vector->x
              + product.m01 * vector->y
              + vector->z * product.m02;
    result->y = product.m10 * vector->x
              + product.m11 * vector->y
              + vector->z * product.m12;
    result->z = product.m20 * vector->x
              + product.m21 * vector->y
              + vector->z * product.m22;

    return result;
}
