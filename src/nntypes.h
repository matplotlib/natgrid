/*
 * $Id: nntypes.h,v 1.3 2000/08/22 03:34:55 haley Exp $
 */

struct datum
{  double       values[3];
   struct datum *nextdat;
};

struct simp
{  int          vert[3];
   double       cent[3];
   struct simp  *nextsimp;
};

struct temp
{  int          end[2];
   struct temp  *nexttemp;
};

struct neig
{  int          neinum;
   double       narea;
   double       coord;
   struct neig  *nextneig;
};

struct asinfo
{  int          crows;
   int          ccols;
   float        **aspect_out;
   float        **slope_out;
};
