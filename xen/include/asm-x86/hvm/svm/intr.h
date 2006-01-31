/*
 * intr.h: SVM Architecture related definitions
 * Copyright (c) 2005, AMD Corporation.
 * Copyright (c) 2004, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 */

#ifndef __ASM_X86_HVM_SVM_INTR_H__
#define __ASM_X86_HVM_SVM_INTR_H__

#ifdef CONFIG_SVM

extern void svm_set_tsc_shift(struct vcpu *v, struct hvm_virpit *vpit);
extern void svm_intr_assist(void);
extern void svm_intr_assist_update(struct vcpu *v, int highest_vector);
extern void svm_intr_assist_test_valid(struct vcpu *v, 
        unsigned long *intr_result);

#endif /* CONFIG_SVM */

#endif /* __ASM_X86_HVM_SVM_INTR_H__ */
